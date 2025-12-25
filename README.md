<h1 align="center">
	📚 libft
</h1>

<p align="center">
	<b><i>Your very first own library</i></b><br>
</p>

---

## 🗣️ About

> _The first project at 42. The aim is to recode some functions from the C standard library as well as some other utility functions that will be used throughout the cursus._

This project is your first step in the 42 curriculum.  It's designed to help you understand the basics of C programming by implementing standard library functions from scratch.  You will learn about memory management, string manipulation, linked lists, and more! 

---

## 🛠️ Usage

### Requirements

The library is written in C and requires the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, run: 

```shell
$ cd path/to/libft && make
```

**2. Using it in your code**

To use the library functions in your code, simply include its header: 

```c
#include "libft.h"
```

**3.  Compiling your program**

📁 **If your program is inside the libft folder:**

```shell
$ cc your_file.c -Wall -Wextra -Werror libft.a -o your_program
```

📂 **If your program is in a different folder:**

```shell
$ cc your_file.c -Wall -Wextra -Werror -I path/to/libft -L path/to/libft -lft -o your_program
```

---

## 📋 Functions

### Character Check & Manipulation

| Function | Description |
|: --------:|:------------|
| `ft_isalpha` | Checks if character is alphabetic |
| `ft_isdigit` | Checks if character is a digit (0-9) |
| `ft_isalnum` | Checks if character is alphanumeric |
| `ft_isascii` | Checks if character is ASCII |
| `ft_isprint` | Checks if character is printable |
| `ft_toupper` | Converts character to uppercase |
| `ft_tolower` | Converts character to lowercase |

### String Manipulation

| Function | Description |
|:--------:|:------------|
| `ft_strlen` | Calculates the length of a string |
| `ft_strlcpy` | Copies string to a buffer |
| `ft_strlcat` | Concatenates string to a buffer |
| `ft_strchr` | Locates first occurrence of character in string |
| `ft_strrchr` | Locates last occurrence of character in string |
| `ft_strncmp` | Compares two strings |
| `ft_strnstr` | Locates a substring in a string |
| `ft_strdup` | Duplicates a string |
| `ft_substr` | Extracts substring from string |
| `ft_strjoin` | Concatenates two strings |
| `ft_strtrim` | Trims characters from beginning and end of string |
| `ft_split` | Splits string using a delimiter character |
| `ft_strmapi` | Applies function to each character of string |
| `ft_striteri` | Applies function to each character of string with its index |

### Memory Manipulation

| Function | Description |
|:--------:|:------------|
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeros a byte string |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (handles overlapping) |
| `ft_memchr` | Scans memory for a character |
| `ft_memcmp` | Compares memory areas |
| `ft_calloc` | Allocates and zeros memory |

### Conversion Functions

| Function | Description |
|:--------:|:------------|
| `ft_atoi` | Converts ASCII string to integer |
| `ft_itoa` | Converts integer to ASCII string |

### File Descriptor Output

| Function | Description |
|:--------:|:------------|
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by newline to fd |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Bonus:  Linked List Functions

| Function | Description |
|:--------:|:------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds node at beginning of list |
| `ft_lstsize` | Counts elements in a list |
| `ft_lstlast` | Returns last node of the list |
| `ft_lstadd_back` | Adds node at end of list |
| `ft_lstdelone` | Deletes content of a node |
| `ft_lstclear` | Deletes and frees list |
| `ft_lstiter` | Applies function to content of each node |
| `ft_lstmap` | Creates new list by applying function to each node |

---

## 🧪 Testing

You can test the library using third-party testers:

- [Paco Tester](https://github.com/xicodomingues/francinette)
- [libftTester](https://github.com/Tripouille/libftTester)
- [libft-war-machine](https://github.com/0x050f/libft-war-machine)

---

## 📁 Project Structure

```
libft/
├── Makefile
├── libft.h
├── ft_*. c
└── ft_*_bonus.c
```

---

## 📝 License

This project is part of the 42 curriculum and is intended for educational purposes. 

---

<p align="center">
	<i>Made with ❤️ by Acherifi</i>
</p>