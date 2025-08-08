# CompressionTool-C
*COMPANY*: CODTECH IT SOLUTIONS;
*NAME*: TANISHKA GARIYA;
*INTERN ID*: CT04DH2132;
*DOMAIN*: C PROGRAMMING;
*DURATION*: 4 WEEKS;
*MENTOR*: NEELA SANTHOSH KUMAR

🧩 Project Title: RLE String Compression and Decompression in C
💻 Platform Used: Dev C++
🎓 Learning Sources: YouTube, GeeksforGeeks, ChatGPT
🧾 Description:
This C program implements a Run-Length Encoding (RLE) algorithm to compress and decompress string data stored in files. The program performs two main operations:

Compression — Reads a string from input.txt, compresses it using RLE, and writes the result to compressed.txt.

Decompression — Reads the compressed RLE string from compressed.txt and reconstructs the original string into decompressed.txt.

🔍 How It Works:
✅ Compression Phase
Reads the input text character by character.

Replaces sequences of repeated characters with the character followed by its count.

Example:
"aaabbc" → "a3b2c1"

✅ Decompression Phase
Reads character-number pairs from the compressed file.

Repeats each character based on the number that follows it.

Reconstructs the original string and saves it into a new file.

✅ File I/O Handling
Uses standard file pointers: fopen, fgetc, fputc, fprintf, ungetc, fclose.

Handles both alphabetic characters and numeric count extraction robustly using isdigit and ungetc.

📘 Example Workflow:
input.txt:
aaaaabbcc

compressed.txt:
a5b2c2

decompressed.txt:
aaaaabbcc

✅ Key Concepts Practiced:
File handling in C (fopen, fgetc, fputc, fprintf, fclose)

Run-Length Encoding (RLE) algorithm

Buffering and character processing

Use of isdigit(), ungetc() for parsing character-count pairs

Defensive programming with error handling for file access

💡 Learning Outcome:
This project deepened my understanding of file I/O, data compression techniques, and string manipulation in C. It also helped me practice writing reusable functions and organizing code into logical modules for compression and decompression tasks.

📚 Acknowledgments:
This project was built with help from:

YouTube tutorials for visualizing RLE logic

GeeksforGeeks for C file handling references

ChatGPT for logic refinement and error handling support
