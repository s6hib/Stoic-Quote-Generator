# Stoic Quote Generator

Combining my interest of philosophy and computer science, I made a simple C++ program that generates a random Stoic quote when run. The quotes are read from a text file and stored in a vector, from which a random quote is selected and printed to the console. 

## Getting Started

### Prerequisites

- A C++ compiler is required. This program uses features from C++11.

### Usage

1. Download the files `main.cpp` and `stoicQuotes.txt`.
2. Make sure the `stoicQuotes.txt` file is in the same directory as `main.cpp`.
3. Compile `main.cpp` with a C++ compiler.
4. Run the compiled program.

## How it works

The `main.cpp` file contains the code for the program. It reads the `stoicQuotes.txt` file line by line and stores each quote in a vector. It then generates a random number which is used as an index to pick a random quote from the vector.

## Customizing the quotes

If you want to use your own quotes, simply edit the `stoicQuotes.txt` file. Add each new quote on a new line.
