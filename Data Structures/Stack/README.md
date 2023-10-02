# Stack Data Structure

A stack is a linear data structure that follows the Last-In, First-Out (LIFO) data structure. It is used to store and manage a collection of elements. It supports two main operations: `push` and `pop`.

Stacks can be though of as a vertical tower. An example would be a stack of video games or a stack of books.

## Operations

1. **Push**: Adds an element to the top of the stack.
   - Time Complexity: O(1)
   - Space Complexity: O(1)

2. **Pop**: Removes and returns the top element from the stack.
   - Time Complexity: O(1)
   - Space Complexity: O(1)

3. **Peek (Top)**: Returns the top element of the stack without removing it.
   - Time Complexity: O(1)
   - Space Complexity: O(1)

## Use Cases
Stacks are used in various applications, including:

- **Function Call Stack**: Used in programming languages to manage function calls and their local variables.
- **Expression Evaluation**: Used for evaluating arithmetic expressions, particularly in converting infix expressions to postfix notation for efficient evaluation.
- **Undo Functionality**: Supporting the "undo" operation in software applications.
- **Backtracking Algorithms**: Such as depth-first search (DFS) in graph traversal.
- **Syntax Parsing**: Used in parsing and evaluating syntax, such as checking for balanced parentheses in expressions.

## Implementation
Stacks can be implemented using various data structures, including arrays and linked lists.

### Array-Based Implementation
The stack is created using an array. The top of the stack is represented by an index, and elements are added and removed by incrementing or decrementing the index.

### Linked List-Based Implementation
The stack is created using a singly linked list, with the head of the list representing the top of the stack. Elements are added and removed by modifying the head of the linked list.
