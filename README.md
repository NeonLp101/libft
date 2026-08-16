*This project has been created as part of the 42 curriculum by lernst.*

# Libft

## Description

Libft is a custom C library built as part of the 42 curriculum. The goal is to reimplement a set of standard C library functions from scratch, as well as develop additional utility functions that will be reused throughout the curriculum.

The library is divided into three parts:

**Part 1 — Libc functions:** Reimplementations of standard functions such as `ft_strlen`, `ft_memcpy`, `ft_strchr`, `ft_atoi`, and others. These follow the behavior described in their respective man pages.

**Part 2 — Additional functions:** Custom utility functions not found in the standard libc, including `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, and the `ft_put*_fd` family for writing to file descriptors.

**Part 3 — Linked list functions:** A set of functions to create and manipulate singly linked lists using the `t_list` structure, including `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap`.

## Instructions

### Compilation

To compile the mandatory part of the library:

```bash
make
```

To compile including the bonus linked list functions:

```bash
make bonus
```

To clean object files:

```bash
make clean
```

To remove all compiled files including the library:

```bash
make fclean
```

To recompile from scratch:

```bash
make re
```

### Usage

Once compiled, include `libft.h` in your source files and link against `libft.a`:

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft
```

## Function Reference

| Function | Description |
|---|---|
| `ft_isalpha` | Returns 1 if char is alphabetic, 0 otherwise |
| `ft_isdigit` | Returns 1 if char is a digit, 0 otherwise |
| `ft_isalnum` | Returns 1 if char is alphanumeric, 0 otherwise |
| `ft_isascii` | Returns 1 if char is in ASCII range, 0 otherwise |
| `ft_isprint` | Returns 1 if char is printable, 0 otherwise |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeroes out a block of memory |
| `ft_memcpy` | Copies memory from src to dest |
| `ft_memmove` | Copies memory safely handling overlaps |
| `ft_strlcpy` | Copies string with size limit |
| `ft_strlcat` | Concatenates strings with size limit |
| `ft_toupper` | Converts char to uppercase |
| `ft_tolower` | Converts char to lowercase |
| `ft_strchr` | Finds first occurrence of char in string |
| `ft_strrchr` | Finds last occurrence of char in string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches memory for a byte value |
| `ft_memcmp` | Compares two memory blocks |
| `ft_strnstr` | Finds a substring within a length-limited string |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates zeroed memory |
| `ft_strdup` | Duplicates a string |
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter character |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character of a string |
| `ft_striteri` | Applies a function to each character in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by newline to a fd |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |
| `ft_lstnew` | Creates a new linked list node |
| `ft_lstadd_front` | Adds a node at the front of a list |
| `ft_lstadd_back` | Adds a node at the back of a list |
| `ft_lstsize` | Returns the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstdelone` | Deletes and frees a single node |
| `ft_lstclear` | Deletes and frees all nodes in a list |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |

## Resources

- [C standard library man pages](https://man7.org/linux/man-pages/)
- [42 Norm documentation](https://github.com/42School/norminette)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)

### AI Usage

Claude (Anthropic) was used during this project as a debugging and learning aid. Specifically:

- Identifying logic bugs in functions (e.g., off-by-one in `ft_memcmp`, wrong buffer size in `ft_strjoin`)
- Making custom interactive quizzes to help me understand concepts more (for example I used this to understand nodes better)
- Understanding edge cases such as integer overflow in `ft_calloc` and unsigned char casting in `ft_strchr`/`ft_strrchr`
- Setting up the `francinette` testing framework on a machine where the `/sgoinfre` network path was unavailable
- The main code was mainly written by myself, with some "rubberducking+" with AI, it aided in understanding some syntax and edge case behavior.