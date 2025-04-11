#include <iostream>
using namespace std;

int main() {
    // Predefined array
    int arr[] = {12, 5, 78, 3, 89, 23, 56}; 

    // Get the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize maxElement to the first element of the array
    int maxElement = arr[0];

    // Loop through the array to find the maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    // Output the maximum element
    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
