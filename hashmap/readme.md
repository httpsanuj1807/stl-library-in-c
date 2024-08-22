# Hash Table Library in C

This repository contains a simple and efficient implementation of a hash table in C. The library is designed for easy integration into any C project. It provides basic hash table functionalities, such as insertion, deletion, lookup, and collision handling using chaining.

## Features

- **Hash Function**: A simple yet effective hash function using a polynomial rolling hash.
- **Collision Handling**: Uses separate chaining with linked lists to handle collisions.
- **Memory Management**: Ensures proper memory management with functions to insert, delete, and lookup entries in the hash table.

## Getting Started

### Prerequisites

To use this library, you'll need a C compiler like `gcc`.

### Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/httpsanuj1807/stl-lib-in-c.git
   cd hashmap
2. **You can compile the library and create an object file using gcc:**

   ```bash
   gcc -c map.c -o map.o
3. **Link the library with your project:**

   ```bash
   gcc hashmap.c map.o -o test
4. **Run the test file for output**

   ```bash
   ./test
