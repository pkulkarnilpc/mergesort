#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    // TODO:
    // Create temporary arrays
    // Copy data
    // Merge sorted halves back into arr
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        // TODO:
        // Find middle
        // Recursively sort left half
        // Recursively sort right half
        // Merge both halves
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[10] = {38, 27, 43, 3, 9, 82, 10, 5, 61, 14};
    int n = 10;

    cout << "Before Sorting: ";
    display(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "After Sorting: ";
    display(arr, n);

    return 0;
}
