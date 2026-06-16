Task 1: Data Structures Implementation


1. Stack using Array
File: `stack.cpp` 
Description: LIFO - Last In First Out data structure
Operations:
- `push(int x)`: Insert element at top - O(1)
- `pop()`: Delete top element - O(1) 
- `peek()`: Search/view top element - O(1)
- `display()`: Print all elements - O(n)
- `isEmpty()`, `isFull()`: Status checks - O(1)

Sample Output
- 10 pushed into stack
20 pushed into stack
30 pushed into stack
Stack elements: 30 20 10 
Top element: 30
30 popped from stack
Stack elements: 20 10

2. Linked List  
File: `linkedlist.cpp`  
Description: Singly linked list with dynamic memory
Operations:
- `insert()`: Add node - O(1) at head, O(n) at end
- `delete()`: Remove node - O(n) 
- `search()`: Find element - O(n)
- `display()`: Print list - O(n)

Sample Output
List after insertion: 10 -> 20 -> 30 -> NULL
Element 20 found in list
List after deletion: 10 -> 30 -> NULL

How to Compile and Run
g++ stack.cpp -o stack.exe
'\stack.exe

g++ linkedlist.cpp -o linkedlist.exe
.\linkedlist.exe
