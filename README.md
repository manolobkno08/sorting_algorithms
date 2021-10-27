# 0x1B. C - Sorting algorithms & Big O

This repository contains sorting algorithms made in C

------



## 0.Bubble sort

Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

![What is Bubble Sort? | Definition and Overview | ProductPlan](https://www.productplan.com/uploads/bubble-sort-1024x683-2.png)

### **How to compile the program?**

*valid on Linux/UNIX operating systems*

##### **1. Open your terminal and clone the repository**

Use one of these commands to clone the repository

**HTTPS:** https://github.com/manolobkno08/sorting_algorithms.git

**SSH:** git@github.com:manolobkno08/sorting_algorithms.git

**2. Enter the directory sorting_algorithms**

**3. Paste the compilation command**

```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
```

**4. run the program**

```bash
./bubble
```

------

##  1.Isertion sort

Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

![Insertion Sort - AlphaCodingSkills](https://www.alphacodingskills.com/algo/img/insertion-sort.PNG)

### **How to compile the program?**

*valid on Linux/UNIX operating systems*

##### **1. Open your terminal and clone the repository**

Use one of these commands to clone the repository

**HTTPS:** https://github.com/manolobkno08/sorting_algorithms.git

**SSH:** git@github.com:manolobkno08/sorting_algorithms.git

**2. Enter the directory sorting_algorithms**

**3. Paste the compilation command**

```bash
gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
```

**4. run the program**

```bash
./insertion
```

------

## 2. Selection sort

In computer science, selection sort is an in-place comparison sorting algorithm. It has an O(n²) time complexity, which makes it inefficient on large lists, and generally performs worse than the similar insertion sort.

![Selection Sort (With Code)](https://cdn.programiz.com/cdn/farfuture/9jjqXX0fGtJE2ul2Mga20fvf_GkNlFAFsDMwrrwFzbQ/mtime:1582112622/sites/tutorial2program/files/Selection-sort-0-comparision.png)

### **How to compile the program?**

*valid on Linux/UNIX operating systems*

##### **1. Open your terminal and clone the repository**

Use one of these commands to clone the repository

**HTTPS:** https://github.com/manolobkno08/sorting_algorithms.git

**SSH:** git@github.com:manolobkno08/sorting_algorithms.git

**2. Enter the directory sorting_algorithms**

**3. Paste the compilation command**

```bash
gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select
```

**4. run the program**

```bash
./select
```

------

## 3. Quick sort

Quicksort is an in-place sorting algorithm. Developed by British computer scientist Tony Hoare in 1959 and published in 1961, it is still a commonly used algorithm for sorting. When implemented well, it can be somewhat faster than merge sort and about two or three times faster than heapsort.

![Java Sorting Algorithms: Quick Sort | Web Design and Web Development news,  javascript, angular, react, vue, php](https://ma-no.org/cache/galleries/contents-1829/1wb7sjvic18hj5yrs6cdqkw.jpeg)

### **How to compile the program?**

*valid on Linux/UNIX operating systems*

##### **1. Open your terminal and clone the repository**

Use one of these commands to clone the repository

**HTTPS:** https://github.com/manolobkno08/sorting_algorithms.git

**SSH:** git@github.com:manolobkno08/sorting_algorithms.git

**2. Enter the directory sorting_algorithms**

**3. Paste the compilation command**

```bash
gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick
```

**4. run the program**

```bash
./quick
```

------

This project was made for holberton school colombia, by Manuel Gomez and Alejandro Alomia.
