#include <iostream>
using namespace std;

int main() {
    // Pre-defined arrays and their sizes
    int arr1[] = {1, 2, 3, 4};  // First array with size 4
    int arr2[] = {5, 6, 7};     // Second array with size 3

    int size1 = sizeof(arr1) / sizeof(arr1[0]);  // Size of first array
    int size2 = sizeof(arr2) / sizeof(arr2[0]);  // Size of second array

    // Merge the arrays into a new array
    int mergedArray[size1 + size2];
    int i = 0, j = 0, k = 0;

    // Copy elements of the first array
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }

    // Copy elements of the second array
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }

    // Output the merged array
    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
