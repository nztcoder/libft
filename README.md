# Libft

A custom implementation of the standard C library functions.

This library recreates key functions from `<string.h>`, `<ctype.h>`, `<stdlib.h>`, and more,  
allowing you to understand low-level memory handling, string manipulation, and functional decomposition in C.

---

## 📘 Overview

The goal of **Libft** is to build a personal static library `libft.a` containing a set of  
essential functions.

---

## ⚙️ Categories

### 🧮 Part 1 – Standard libc functions
Reimplementations of standard C library functions:
- `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`
- `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`
- `atoi`
- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
- `calloc`

### 🧩 Part 2 – Additional functions
Helper functions for strings, memory, and file descriptors:
- `substr`, `strjoin`, `strtrim`, `split`
- `itoa`, `strmapi`, `striteri`
- `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`
