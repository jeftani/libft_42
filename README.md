# Libft

## Introduction
Libft is a custom implementation of standard C library functions. The purpose of this project is to deepen the understanding of C programming, memory management, and function implementation. The project consists of functions from `<string.h>`, `<stdlib.h>`, `<ctype.h>`, and additional utility functions.

## Table of Contents
- [Getting Started](#getting-started)
- [Functions Implemented](#functions-implemented)
- [Compilation](#compilation)
- [Usage](#usage)
- [Testing](#testing)
- [License](#license)

## Getting Started
To use Libft in your projects, you need to compile the library into an archive file (`libft.a`) and link it with your program.

### Prerequisites
- GCC (GNU Compiler Collection)
- Make

### Cloning the Repository
```sh
git clone https://github.com/yourusername/libft.git
cd libft
```

## Functions Implemented
Libft includes the implementation of various standard library functions, categorized as follows:

### Part 1 - Standard Functions
- `ft_memset`  - Fills memory with a constant byte
- `ft_bzero`   - Zeros out memory
- `ft_memcpy`  - Copies memory area
- `ft_memccpy` - Copies memory until a specified character is found
- `ft_memmove` - Copies memory safely handling overlapping areas
- `ft_memchr`  - Searches for a byte in memory
- `ft_memcmp`  - Compares memory blocks
- `ft_strlen`  - Computes string length
- `ft_strcpy`  - Copies a string
- `ft_strncpy` - Copies a string up to a given length
- `ft_strcat`  - Concatenates two strings
- `ft_strncat` - Concatenates two strings up to a given length
- `ft_strchr`  - Locates a character in a string
- `ft_strrchr` - Locates a character in a string (reverse search)
- `ft_strstr`  - Finds a substring in a string
- `ft_strnstr` - Finds a substring with a length limit
- `ft_strcmp`  - Compares two strings
- `ft_strncmp` - Compares two strings up to a given length
- `ft_atoi`    - Converts a string to an integer

### Part 2 - Additional Functions
- `ft_strdup`  - Duplicates a string
- `ft_substr`  - Extracts a substring from a string
- `ft_strjoin` - Concatenates two strings into a new string
- `ft_strtrim` - Removes leading and trailing whitespace
- `ft_split`   - Splits a string into an array of words
- `ft_itoa`    - Converts an integer to a string
- `ft_strmapi` - Applies a function to each character in a string

### Bonus - Linked List Functions
- `ft_lstnew`   - Creates a new linked list node
- `ft_lstadd_front` - Adds a node to the front of a linked list
- `ft_lstadd_back`  - Adds a node to the end of a linked list
- `ft_lstdelone` - Deletes a node from the list
- `ft_lstclear`  - Deletes an entire linked list
- `ft_lstiter`   - Iterates over a linked list and applies a function
- `ft_lstmap`    - Creates a new linked list from an existing list

## Compilation
To compile the library, simply run:
```sh
make
```
This will generate `libft.a`, the static library that can be linked with your programs.

To clean up object files:
```sh
make clean
```
To remove object files and the compiled library:
```sh
make fclean
```
To recompile everything from scratch:
```sh
make re
```

## Usage
To use Libft in your project, include the header file and link against the compiled library:

```c
#include "libft.h"

int main() {
    char *str = ft_strdup("Hello, Libft!");
    printf("%s\n", str);
    free(str);
    return 0;
}
```

Compile your project with:
```sh
gcc main.c -L. -lft -o my_program
```

## Testing
You can use external testers to validate your implementation:

- [Libft Unit Tests](https://github.com/alelievr/libft-unit-test)
- [Libft War Machine](https://github.com/ska42/libft-war-machine)

Run tests by cloning one of these repositories and following their instructions.

## License
This project is open-source and can be used freely for learning purposes.

