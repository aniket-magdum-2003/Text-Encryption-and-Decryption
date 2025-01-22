# Ciphertext Encryption/Decryption 🛡🔑
This repository contains a simple C++ program that demonstrates basic encryption and decryption using a shift cipher (Caesar cipher). The provided code allows users to encrypt or decrypt text based on a pass key.

## 📂 Files
main.cpp: Contains the implementation of the encryption and decryption logic.
## 🧩 Code Overview
The code defines a class ciphertext with two main methods:

encrypt(char n[40]): Encrypts the input text by shifting characters using a provided key.
decrypt(char n[40]): Decrypts the input text by reversing the shift using a provided key.
Example Usage
Encryption:

Enter your input text.
Choose option 1 to encrypt.
Input the pass key when prompted.
The encrypted text will be displayed.
Decryption:

Enter your encrypted text.
Choose option 2 to decrypt.
Input the pass key when prompted.
The decrypted text (original text) will be displayed.


## 📋 Instructions
Clone the Repository:

```bash
git clone https://github.com/yourusername/yourrepository.git
Navigate to the Directory:
``` 
```bash
cd yourrepository
Compile the Code:
```
```bash
g++ -o ciphertext main.cpp
```
```bash
./ciphertext
```
