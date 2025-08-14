# 📊 Sorting Algorithms in C++

This repository contains implementations of the most popular **sorting algorithms** in C++ with explanations, complexity analysis, and sample usage.

---

## 📋 Table of Contents
1. [Introduction](#introduction)
2. [Algorithms](#algorithms)
3. [Complexity Table](#complexity-table)


---

## 📌 Introduction
Sorting is one of the most fundamental operations in computer science.  
A sorting algorithm arranges elements of a list or array into a specific order (usually ascending or descending).

---

## ⚡ Algorithms

### 1. Bubble Sort
- **Idea:** Repeatedly swap adjacent elements if they are in the wrong order.
- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)
- **Best Use:** Small datasets, educational purposes.

### 2. Selection Sort
- **Idea:** Select the smallest element and swap it with the first unsorted element.
- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)
- **Best Use:** Simple implementation, small arrays.

### 3. Insertion Sort
- **Idea:** Build the sorted array one element at a time by inserting items into their correct position.
- **Time Complexity:** O(n²) worst, O(n) best (already sorted).
- **Best Use:** Small or nearly sorted data.

### 4. Merge Sort
- **Idea:** Divide the array into halves, sort each half, and merge them.
- **Time Complexity:** O(n log n)
- **Space Complexity:** O(n)
- **Best Use:** Large datasets, stable sorting.

### 5. Quick Sort
- **Idea:** Choose a pivot, partition the array, and recursively sort the partitions.
- **Time Complexity:** O(n log n) average, O(n²) worst.
- **Space Complexity:** O(log n) recursion.
- **Best Use:** General-purpose sorting.

### 6. Heap Sort
- **Idea:** Build a max heap and repeatedly extract the maximum element.
- **Time Complexity:** O(n log n)
- **Space Complexity:** O(1)
- **Best Use:** In-place, no extra memory.

### 7. Counting Sort
- **Idea:** Count occurrences of each value and reconstruct the array.
- **Time Complexity:** O(n + k)
- **Space Complexity:** O(k)
- **Best Use:** Small range integers.

### 8. Radix Sort
- **Idea:** Sort numbers digit by digit using a stable sort (like counting sort).
- **Time Complexity:** O(nk)
- **Best Use:** Integers, strings with fixed length.

### 9. Bucket Sort
- **Idea:** Distribute elements into buckets, sort each bucket, and concatenate.
- **Time Complexity:** O(n) average.
- **Best Use:** Uniformly distributed data.

---

## 📊 Complexity Table

| Algorithm       | Best       | Average    | Worst      | Space | Stable |
|----------------|------------|------------|------------|-------|--------|
| Bubble Sort    | O(n)       | O(n²)      | O(n²)      | O(1)  | ✅     |
| Selection Sort | O(n²)      | O(n²)      | O(n²)      | O(1)  | ❌     |
| Insertion Sort | O(n)       | O(n²)      | O(n²)      | O(1)  | ✅     |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) | O(n)  | ✅     |
| Quick Sort     | O(n log n) | O(n log n) | O(n²)      | O(log n) | ❌  |
| Heap Sort      | O(n log n) | O(n log n) | O(n log n) | O(1)  | ❌     |
| Counting Sort  | O(n+k)     | O(n+k)     | O(n+k)     | O(k)  | ✅     |
| Radix Sort     | O(nk)      | O(nk)      | O(nk)      | O(n+k)| ✅     |
| Bucket Sort    | O(n)       | O(n)       | O(n²)      | O(n)  | ✅     |

---
