# 📚 Libft - Your C Function Library

[Spanish version 🇪🇸](README_es.md)

`libft` is a C function library developed from scratch to replicate and improve some functions of the standard C library. It is a fundamental project at **42** school, designed to strengthen knowledge of the language and memory management.

## 📌 **Features**

✅ Custom implementations of standard functions.\
✅ String, memory, and linked list manipulation functions.\
✅ Code structured according to **Norminette**.\
✅ Includes **Get Next Line** and **ft\_printf** as extras.

## 🛠️ **Implemented Functions**

### 🔹 Conversion and Checking Functions

- `ft_atoi` - Converts a string to an integer.
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isalpha` - Checks if a character is a letter.
- `ft_isascii` - Checks if a character belongs to the ASCII table.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isprint` - Checks if a character is printable.
- `ft_tolower` - Converts an uppercase letter to lowercase.
- `ft_toupper` - Converts a lowercase letter to uppercase.

### 🔹 Memory Functions

- `ft_bzero` - Sets a block of memory to zero.
- `ft_memset` - Fills a block of memory with a specific value.
- `ft_memcpy` - Copies a block of memory.
- `ft_memchr` - Searches for a character in a block of memory.
- `ft_memcmp` - Compares two blocks of memory.
- `ft_memmove` - Copies a block of memory, even if they overlap.
- `ft_calloc` - Allocates memory initialized to zero.

### 🔹 String Functions

- `ft_strlen` - Calculates the length of a string.
- `ft_strchr` - Searches for a character in a string.
- `ft_strrchr` - Searches for a character in a string (last occurrence).
- `ft_strncmp` - Compares two strings.
- `ft_strlcpy` - Copies a string to another with limited size.
- `ft_strlcat` - Concatenates two strings with limited size.
- `ft_strdup` - Duplicates a string.
- `ft_strnstr` - Locates a substring within another string.
- `ft_strjoin` - Concatenates two strings.
- `ft_strtrim` - Removes unnecessary characters at the beginning and end of a string.
- `ft_strmapi` - Applies a function to each character of a string.
- `ft_striteri` - Applies a function to each character of a string (modifiable).
- `ft_split` - Splits a string into an array of strings.
- `ft_substr` - Extracts a substring from another string.

### 🔹 Input/Output Functions

- `ft_putchar_fd` - Writes a character to a file descriptor.
- `ft_putstr_fd` - Writes a string to a file descriptor.
- `ft_putendl_fd` - Writes a string with a newline to a file descriptor.
- `ft_putnbr_fd` - Writes a number to a file descriptor.

### 🔹 Additional Functions

- `ft_itoa` - Converts a number to a string.

### 🔹 Linked List Functions

- `ft_lstnew` - Creates a new node.
- `ft_lstadd_front` - Adds a node to the beginning of the list.
- `ft_lstsize` - Counts the number of nodes.

## 🚀 **Included Extras**

- **Get Next Line (**``**)**: Efficient file reading line by line.
- **ft\_printf**: Custom implementation of `printf` with support for multiple formats.

## 🔧 **Installation and Usage**

### 1️⃣ **Clone the repository**

```bash
git clone https://github.com/rpaparoni/libft_rpaparoni.git
cd libft_rpaparoni
```

### 2️⃣ **Compile the library**

```bash
make
```

This will generate `libft.a`, which you can include in any C project.

### 3️⃣ **Use in your code**

```c
#include "libft.h"

int main()
{
    char *str = "Hello, world!";
    ft_printf("Length: %d\n", ft_strlen(str));
    return 0;
}
```

### 4️⃣ **Compile your project with libft**

```bash
gcc main.c -L. -lft -o program
```

## 📜 **License**

This project is open source and can be freely used.

🐙 **GitHub:** [rpaparoni](https://github.com/rpaparoni)

