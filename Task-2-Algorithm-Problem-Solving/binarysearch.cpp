#include <iostream>
using namespace std;

// Binary Search - O(log n)
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; // Must be sorted
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Test cases
    int targets[] = {23, 5, 100};

    for (int t : targets) {
        int result = binarySearch(arr, n, t);
        if (result!= -1)
            cout << "Element " << t << " found at index " << result << endl;
        else
            cout << "Element " << t << " not found\n";
    }

    cout << "Complexity: O(log n)\n";
    return 0;
}
