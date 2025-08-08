# CompressionTool-C
*COMPANY*: CODTECH IT SOLUTIONS;
*NAME*: TANISHKA GARIYA;
*INTERN ID*: CT04DH2132;
*DOMAIN*: C PROGRAMMING;
*DURATION*: 4 WEEKS;
*MENTOR*: NEELA SANTHOSH KUMAR

📦 Project Title: File Compression and Decompression in C
💻 Platform Used: Dev C++
🎓 Learning Sources: YouTube, GeeksforGeeks, ChatGPT
🧾 Description:
This project implements a basic file compression and decompression system in C using Run-Length Encoding (RLE) — a simple and effective data compression technique.

The program allows users to:

Compress the contents of a text file (e.g., "aaabbc" → "a3b2c1")

Decompress a file encoded in RLE format back to its original form

Perform these operations through a user-friendly, menu-driven interface

🔍 Key Features:
✅ Compression Logic:
Reads the input file character by character.

Counts consecutive repeating characters.

Writes the character followed by the count to the output file using fprintf().

✅ Decompression Logic:
Reads the compressed file character and count pair.

Writes the character count times into the output file using fputc().

✅ Interactive Menu:
Offers three choices: compress, decompress, or exit.

Prompts the user for input and output file names.

📘 Example:
If the input file contains:

nginx
Copy
Edit
aaaabbcc
The compressed file will store:

nginx
Copy
Edit
a4b2c2
After decompression, the output file will restore the original:

nginx
Copy
Edit
aaaabbcc
✅ Concepts Practiced:
File handling (fopen, fgetc, fputc, fprintf, fscanf)

String manipulation and I/O operations

Run-Length Encoding logic (RLE)

Error handling and user input validation

Menu-driven programming in C

💡 Learning Outcome:
This project helped me understand how compression algorithms work, how to manipulate files at a low level, and how to build interactive CLI applications. It gave me practical exposure to both reading/writing files and implementing real-world data encoding methods.

📚 Acknowledgments:
Built with guidance and references from:

YouTube tutorials (for RLE logic visualization)

GeeksforGeeks (for file handling syntax and patterns)

ChatGPT (for debugging and refining logic)

OUTPUT:
