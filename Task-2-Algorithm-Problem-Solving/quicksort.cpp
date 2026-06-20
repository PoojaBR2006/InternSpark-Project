#include <iostream>
#include <ctime>
using namespace std;

// Partition function - O(n)
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quicksort function - Avg O(n log n), Worst O(n^2)
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11, 90, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    clock_t start = clock();
    quickSort(arr, 0, n - 1);
    clock_t end = clock();

    cout << "Sorted array: ";
    printArray(arr, n);

    double time_taken = double(end - start) / CLOCKS_PER_SEC * 1000;
    cout << "Time taken: " << time_taken << " ms\n";
    cout << "Complexity: Average O(n log n)\n";

    return 0;
}
