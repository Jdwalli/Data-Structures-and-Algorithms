# Binary Search

Binary search is an efficient algorithm for finding a specific target element within a sorted collection of elements. It operates by repeatedly dividing the search interval in half until the target element is found or the search interval becomes empty.

## Algorithm Steps

1. **Initialize**: Set two pointers, `low` and `high`, to define the current search interval. Initially, `low` points to the first element, and `high` points to the last element of the array.

2. **Search Loop**: While `low` is less than or equal to `high`, repeat the following steps:
   - Calculate the middle index: `middle_index = low + (high - low) / 2`.
   - Compare the element at `middle_index` with the target value:
     - If the element is equal to the target, return `middle_index` as the index of the target.
     - If the element is less than the target, update `low` to `middle_index + 1` (move the search interval to the right half).
     - If the element is greater than the target, update `high` to `middle_index - 1` (move the search interval to the left half).

3. **Target Not Found**: If the loop exits and the target value is not found, return -1 to indicate that the target is not present in the array.

## Time Complexity

Binary search is efficient because it reduces the search interval by half with each comparison. The time complexity is O(log N), where N is the number of elements in the array. This makes binary search much faster than linear search for large datasets.

## Space Complexity

The space complexity of binary search is O(1) because it uses a constant amount of extra space for variables, regardless of the size of the input array.

## Use Cases

Binary search is widely used in scenarios where you have a sorted collection of data, such as:

- **Searching in Sorted Arrays**: Finding an element in a sorted array quickly.
- **Dictionaries**: Efficient dictionary lookup in data structures like hash tables.
- **Database Indexing**: Accelerating database queries when data is indexed.
- **Computer Science Algorithms**: Used as a building block in various algorithms like quicksort and mergesort.

## Implementation

Binary search can be implemented in various programming languages using different data structures. The core logic remains the same, with differences in syntax and details.
