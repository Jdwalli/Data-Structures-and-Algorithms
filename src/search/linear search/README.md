# Linear Search

Linear search, also known as sequential search, is a straightforward and simple search algorithm used to find a specific target element in a collection of elements. It sequentially examines each element in the collection until a match is found or until all elements have been checked.

## Algorithm Steps

1. **Initialization**: Start at the beginning of the collection (typically the first element).

2. **Search Loop**: Repeat the following steps until one of the following conditions is met:
   - The target element is found.
   - The end of the collection is reached (the element is not present).

3. **Comparison**: Compare the current element with the target element.
   - If they are equal, return the index of the current element as the result.
   - If they are not equal, move to the next element in the collection (increment the index).

4. **Termination**: If the end of the collection is reached without finding the target element, return -1 to indicate that the element is not present.

## Time Complexity

The time complexity of linear search is O(N), where N is the number of elements in the collection. In the worst case, you may need to examine all elements one by one, making it a less efficient search algorithm compared to techniques like binary search for sorted data.

## Space Complexity

The space complexity of linear search is O(1) because it uses a constant amount of extra space for variables, regardless of the size of the input collection.

## Use Cases

Linear search is appropriate when:

- The collection is not sorted.
- You need to find the first occurrence of a target element.
- The collection is small or unsorted, and the overhead of sorting the data is not justified.
- You need to perform additional operations while searching (e.g., checking conditions or processing elements).
