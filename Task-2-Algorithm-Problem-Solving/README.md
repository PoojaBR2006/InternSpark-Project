


1. quicksort

How to Run

g++ quicksort.cpp -o quicksort.exe
.\quicksort.exe

Sample Output
Original array: 64 25 12 22 11 90 5 
Sorted array: 5 11 12 22 25 64 90 


---

2. binary_search



How to Run
g++ binary_search.cpp -o binary.exe
.\binary.exe

Sample Output
Array: 2 5 8 12 16 23 38 56 72 91 
Element 23 found at index 5
Element 5 found at index 1
Element 100 not found



---

3. knapsack



How to Run

g++ knapsack.cpp -o knapsack.exe
.\knapsack.exe

Sample Input
Weights: {10, 20, 30}
Values:  {60, 100, 120}
Capacity: 50

Sample Output
Weights: 10 20 30 
Values: 60 100 120 
Knapsack Capacity: 50
Maximum value in Knapsack = 220
Complexity: O(n*W) where n=items, W=capacity

Logic
Uses bottom-up DP table `dp[i][w]` = max value with first `i` items and capacity `w`.  
Optimal choice: `max(val[i-1] + dp[i-1][w-wt[i-1]], dp[i-1][w])`

