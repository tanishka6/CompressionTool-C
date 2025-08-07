#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//Function to compress a string using RLE
void compress(FILE *in, FILE *out)
{
	char prev = fgetc(in);
	if(prev==EOF)
	return;
	
	int count=1;
	char curr;
	
	while((curr=fgetc(in))!=EOF)
	{
		if(curr==prev)
		{
			count++;
		}
		else
		{
			fprintf(out,"%c%d",prev,count);
			prev=curr;
			count=1;
		}
	}
	fprintf(out,"%c%d",prev,count);//write the last group
}

//Function to decompress RLE string
void decompress(FILE *in,FILE *out)
{
	char ch;
	while((ch=fgetc(in))!=EOF)
	{
		if(isalpha(ch))
		{
			char numStr[10];
			int i=0;
			char digit;
			while(isdigit(digit=fgetc(in)))
			{
				numStr[i++]=digit;
			}
			numStr[i]='\0';
			int count= atoi(numStr);
			
			for(int j=0;j=count;j++)
			{
				fputc(ch,out);
			}
			
			if(digit != EOF)
			{
				ungetc(digit,in);//puch back non-digit
			}
		}
	}
}

int main()
{
	FILE *inFile, *compressedFile,*decompressedFile;
	
	//Step 1:Compression
	inFile=fopen("input.txt","r");
	compressedFile=fopen("compressed.txt","w");
	if(!inFile || !compressedFile)
	{
		printf("Error opening file for compression.\n");
		return 1;
	}
	compress(inFile,compressedFile);
	fclose(inFile);
	fclose(compressedFile);
	printf("Compression complete.Output saved in 'compressed.txt'.\n");
	
	//Step 2: Decompression
	compressedFile=fopen("compressed.txt","r");
	decompressedFile=fopen("decompressed.txt","r");
	if(!compressedFile || !decompressedFile)
	{
		printf("Error opening the file for decompression.\n");
		return 1;
	}
	decompress(compressedFile,decompressedFile);
	fclose(compressedFile);
	fclose(decompressedFile);
	printf("Decompression complete.Output saved in 'decompressed.txt'.\n");
	return 0;
}
