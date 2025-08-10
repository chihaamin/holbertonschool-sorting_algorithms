# Sorting Algorithms Project

This project implements several classic sorting algorithms in C, along with utility functions for printing arrays and doubly linked lists. Each algorithm is implemented in its own file, and all function prototypes are defined in `sort.h`.

## Table of Contents
- [Files and Functions](#files-and-functions)
  - [sort.h](#sorth)
  - [print_array.c](#print_arrayc)
  - [print_list.c](#print_listc)
  - [0-bubble_sort.c](#0-bubble_sortc)
  - [1-insertion_sort_list.c](#1-insertion_sort_listc)
  - [2-selection_sort.c](#2-selection_sortc)
  - [3-quick_sort.c](#3-quick_sortc)
- [Usage](#usage)
- [Authors](#authors)

---

## Files and Functions

### sort.h
- Defines the `listint_t` struct for a doubly linked list.
- Declares all sorting and printing functions:
  - `void print_array(const int *array, size_t size);`
  - `void print_list(const listint_t *list);`
  - `void bubble_sort(int *array, size_t size);`
  - `void insertion_sort_list(listint_t **list);`
  - `void selection_sort(int *array, size_t size);`
  - `void quick_sort(int *array, size_t size);`

### print_array.c
- **Function:** `print_array`
- **Description:** Prints an array of integers, separated by commas.

### print_list.c
- **Function:** `print_list`
- **Description:** Prints a doubly linked list of integers, separated by commas.

### 0-bubble_sort.c
- **Function:** `bubble_sort`
- **Description:** Sorts an array of integers in ascending order using the Bubble Sort algorithm. Prints the array after each swap.

### 1-insertion_sort_list.c
- **Function:** `insertion_sort_list`
- **Description:** Sorts a doubly linked list of integers using the Insertion Sort algorithm. Prints the list after each swap.
- **Helper Function:** `swap_nodes` swaps two nodes in the doubly linked list.

### 2-selection_sort.c
- **Function:** `selection_sort`
- **Description:** Sorts an array of integers in ascending order using the Selection Sort algorithm. Prints the array after each swap.

### 3-quick_sort.c
- **Function:** `quick_sort`
- **Description:** Sorts an array of integers in ascending order using the Quick Sort algorithm (Lomuto partition scheme). Prints the array after each swap.
- **Helper Functions:**
  - `swap_ints` swaps two integers in the array.
  - `lomuto_partition` partitions the array for quick sort.
  - `lomuto_sort` recursively sorts partitions.

---

## Usage

Include `sort.h` in your C files and compile with all source files. Example:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o sort
```

Call the desired sorting function on your data structure.

---

## Authors

- Amin Chiha (<amin.chiha@gmail.com>)

---
