# Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.

## Algorithm Description

1. **Initialization**: Start with an unsorted collection of elements.

2. **Passes**: Repeat the following steps until no more swaps are needed in a pass:
   - **Comparisons and Swaps**: Compare adjacent elements in the collection and swap them if they are in the wrong order (e.g., if `arr[i] > arr[i+1]`).

3. **Termination**: The algorithm terminates when no more swaps are made in a pass, indicating that the collection is now sorted.

## Time Complexity

Bubble Sort has a time complexity of O(n^2) in the worst case and average case, making it inefficient for large collections. It performs poorly when dealing with large datasets, but it can be useful for small collections or as an educational example of a sorting algorithm.

## Space Complexity

The space complexity of Bubble Sort is O(1), meaning it uses a constant amount of extra space for variables regardless of the input size.

## Use Cases

Bubble Sort is rarely used in practice due to its poor time complexity, but it can be useful for:
