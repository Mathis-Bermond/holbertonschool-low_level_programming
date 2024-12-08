# File I/O in C

This project covers the basics of file input and output (I/O) in the C programming language. It includes examples and exercises to help you understand how to read from and write to files.

## Table of Contents
- [Introduction](#introduction)
- [File Operations](#file-operations)
    - [Opening a File](#opening-a-file)
    - [Reading from a File](#reading-from-a-file)
    - [Writing to a File](#writing-to-a-file)
    - [Closing a File](#closing-a-file)
- [Examples](#examples)
- [Exercises](#exercises)
- [Resources](#resources)

## Introduction
File I/O is an essential part of many applications. It allows programs to persist data, read configuration files, and interact with other software components. In C, file I/O is performed using standard library functions.

## File Operations

### Opening a File
To open a file, use the `fopen` function. It requires the file name and the mode (e.g., read, write, append).

```c
FILE *file = fopen("filename.txt", "r");
if (file == NULL) {
        perror("Error opening file");
}
```

### Reading from a File
To read from a file, use functions like `fgetc`, `fgets`, or `fread`.

```c
char buffer[100];
if (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Read: %s", buffer);
}
```

### Writing to a File
To write to a file, use functions like `fputc`, `fputs`, or `fwrite`.

```c
const char *text = "Hello, World!";
if (fputs(text, file) == EOF) {
        perror("Error writing to file");
}
```

### Closing a File
Always close a file when you're done with it using the `fclose` function.

```c
if (fclose(file) != 0) {
        perror("Error closing file");
}
```

## Examples
- [Example 1: Reading a File](examples/reading_file.c)
- [Example 2: Writing to a File](examples/writing_file.c)

## Exercises
1. Write a program that reads a file and prints its contents to the console.
2. Write a program that writes user input to a file.

## Resources
- [C File I/O - Tutorialspoint](https://www.tutorialspoint.com/cprogramming/c_file_io.htm)
- [File Handling in C - GeeksforGeeks](https://www.geeksforgeeks.org/file-handling-c-classes/)
