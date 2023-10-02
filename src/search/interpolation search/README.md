# Interpolation Search

Interpolation search is an algorithm used to search for a specific target element in a sorted collection of elements. It is an improvement over binary search when the elements in the collection are uniformly distributed. Interpolation search estimates the likely position of the target element based on its value and adjusts the search interval accordingly.

## Algorithm Steps

1. **Initialization**: Start with a sorted collection of elements and define the search interval using two pointers, `low` and `high`. Initially, set `low` to the index of the first element and `high` to the index of the last element.

2. **Estimation**: Calculate an estimate of the position of the target element within the collection based on its value. The estimation is made using a formula:
   
   ```plaintext
   probe = low + (target - arr[low]) * (high - low) / (arr[high] - arr[low])
   ```
   
   This formula makes an assumption that the elements are uniformly distributed, and it tries to guess the likely position of the target within the search interval.

3. **Comparison**: Compare the target element with the element at the estimated position (`arr[probe]`).
   
   - If the elements are equal, return `probe` as the index where the target is found.
   - If the target element is less than `arr[probe]`, update `high` to `probe - 1` (narrowing the search interval to the left).
   - If the target element is greater than `arr[probe]`, update `low` to `probe + 1` (narrowing the search interval to the right).

4. **Termination**: Repeat steps 2 and 3 until the target element is found, or the search interval becomes empty (`low > high`). If the element is not found, return -1 to indicate that the element is not present in the collection.

## Time Complexity

The time complexity of interpolation search is generally O(log(log N)), making it more efficient than binary search for uniformly distributed data. However, in the worst case (non-uniform data distribution), it can become O(N), similar to linear search.

## Space Complexity

The space complexity of interpolation search is O(1) because it uses a constant amount of extra space for variables, regardless of the size of the input collection.

## Use Cases

Interpolation search is useful when:

- The elements are uniformly distributed.
- You want to improve search performance over binary search in some scenarios.
- You have a sorted collection of data where the elements are relatively close in value.
