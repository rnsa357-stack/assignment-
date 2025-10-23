C Assignment (Functions & Header)

ASSIGNMENT:
│
├── main.c             # Main menu-driven program
├── mylib.h            # Header file for number functions
├── mylib.c            # Source file for number functions
├── arraylib.h         # Header file for array utilities
├── arraylib.c         # Source file for array utilities
└── README.md          # Documentation (this file)

COMPILATION AND EXECUTION:
1. Open terminal inside the assignment/ folder.
2. Compile all files together:
    gcc main.c mylib.c arraylib.c -o assignment
Run the program:

> On Windows:
    assignment.exe
> On Mac/Linux:
    ./assignment

Objective 1: Number Functions (mylib.h / mylib.c) :
    ===== MENU =====
1. Check Armstrong Number
2. Check Adams Number
3. Check Prime Palindrome Number
4. Array Utilities Demo
5. Exit
Enter choice:

Objective 2: Array Utilities (arraylib.h / arraylib.c) :
Implement basic 1D array operations:
- `findMaxIndex()` → Find index of largest element  
- `findMinIndex()` → Find index of smallest element  
- `findAverage()` → Calculate average of array elements  
- `reverseArray()` → Reverse the elements in place  
- `sortArrayInsertion()` → Sort the array using insertion sort  
- `linearSearchSentinel()` → Search using sentinel technique  
- `displayArray()` → Nicely print the array elements  

EXAMPLE :ARRAY DEMO

Original: [8, 2, 5, 3, 9]
Max index: 4
Min index: 1
Average: 5.40
Reversed: [9, 3, 5, 2, 8]
Sorted: [2, 3, 5, 8, 9]
Value 5 found at index 2

AUTHOR :
Shivam
