*This project has been created as part of the 42 curriculum by ohajjaji.*

# Description

**Libft** is the first major project at 42. The goal is to reimplement a set of standard C library functions, along with additional utility functions and linked list operations, to create a custom static library (`libft.a`).

This project serves as a foundational toolkit for future C projects in the 42 curriculum. All functions are written in accordance with the **42 Norminette** and the requirements of the project subject.

---

## Library Description

The library is categorized into three main functional groups:

### 1. Libc Functions

Standard C library functions reimplemented with the `ft_` prefix.

**Character Checks & Conversions**
- `ft_isalpha`: Checks whether a character is an alphabetic letter.
- `ft_isdigit`: Checks whether a character is a digit.
- `ft_isalnum`: Checks whether a character is alphanumeric.
- `ft_isascii`: Checks whether a character belongs to the ASCII character set.
- `ft_isprint`: Checks whether a character is printable.
- `ft_toupper`: Converts a lowercase letter to uppercase.
- `ft_tolower`: Converts an uppercase letter to lowercase.

**String Examination & Manipulation**
- `ft_strlen`: Returns the length of a string.
- `ft_strchr`: Finds the first occurrence of a character in a string.
- `ft_strrchr`: Finds the last occurrence of a character in a string.
- `ft_strncmp`: Compares two strings up to a specified number of characters.
- `ft_strlcpy`: Copies a string into a destination buffer with size control.
- `ft_strlcat`: Appends a string to a destination buffer with size control.
- `ft_strnstr`: Finds a substring within a string, searching up to a specified length.

**Memory Operations**
- `ft_memset`: Fills a memory block with a specified byte.
- `ft_bzero`: Sets a memory block to zero.
- `ft_memcpy`: Copies a memory block to another memory block.
- `ft_memmove`: Copies memory blocks safely when they overlap.
- `ft_memchr`: Finds the first occurrence of a byte in a memory block.
- `ft_memcmp`: Compares two memory blocks byte by byte.

**Conversions & Allocations**
- `ft_atoi`: Converts a string into an integer.
- `ft_calloc`: Allocates memory for multiple elements and initializes it to zero.
- `ft_strdup`: Creates a dynamically allocated copy of a string.

### 2. Additional Functions

Utility functions for string manipulation, file descriptor output, and memory management.

**String Utilities**
- `ft_substr`: Creates a substring from a specified starting position and length.
- `ft_strjoin`: Concatenates two strings into a new allocated string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string into an array of strings using a delimiter.
- `ft_strmapi`: Creates a new string by applying a function to each character.
- `ft_striteri`: Applies a function to each character of a string, passing its index and address.

**File Descriptor Output**
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

**Number Conversion**
- `ft_itoa`: Converts an integer into a string.

### 3. Linked List Functions

Functions for creating, accessing, and manipulating singly linked lists.

- `ft_lstnew`: Creates a new list node.
- `ft_lstadd_front`: Adds a node to the beginning of a list.
- `ft_lstsize`: Counts the number of nodes in a list.
- `ft_lstlast`: Returns the last node of a list.
- `ft_lstadd_back`: Adds a node to the end of a list.
- `ft_lstdelone`: Deletes one node using a specified deletion function.
- `ft_lstclear`: Deletes all nodes in a list and frees their content.
- `ft_lstiter`: Applies a function to the content of each node.
- `ft_lstmap`: Creates a new list by applying a function to each node's content.
---

## Instructions

### Compilation

To compile the library and generate the `libft.a` static library, run the following command from the project root directory:

```bash
make
```

### Available Makefile Rules

- `make` or `make all`: Compile the library.
- `make clean`: Remove object files.
- `make fclean`: Remove object files and the compiled library.
- `make re`: Rebuild the library from scratch.

### Usage

To use Libft in another C project, include the header and link the compiled library:

```c
#include "libft.h"
```

Compile your program with:

```bash
cc main.c -L. -lft
```

Make sure `libft.a` and `libft.h` are accessible from the appropriate directories.

---

## Resources

- [cppreference - C Library](https://en.cppreference.com/w/c/) - Documentation for standard C library functions.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) - Official documentation explaining Makefiles, rules, targets, prerequisites, and variables.
- [Makefile Tutorial](https://makefiletutorial.com/) - A practical guide with examples for understanding and writing Makefiles.

### AI Usage

AI was used as a learning assistant throughout this project to:
- Understand pointers, memory management, and linked lists.
- Explain Makefiles, compilation, and static libraries.

All project functions were implemented by me, using AI as a support tool to improve my understanding of the concepts.
