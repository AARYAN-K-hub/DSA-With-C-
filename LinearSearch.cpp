#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8, 9, 10, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the element you want to search for: ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}