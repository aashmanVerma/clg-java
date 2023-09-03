#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int size, int x) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int binarySearchRecursive(int arr[], int left, int right, int x) {
    if (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            return binarySearchRecursive(arr, mid + 1, right, x);
        } else {
            return binarySearchRecursive(arr, left, mid - 1, x);
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Element to search"<<endl;
    int x;
    cin>>x;

    int resultIterative = binarySearchIterative(arr, size, x);
    int resultRecursive = binarySearchRecursive(arr, 0, size - 1, x);

    cout << "Iterative Binary Search Index: " << resultIterative << endl;
    cout << "Recursive Binary Search Index: " << resultRecursive << endl;

    return 0;
}
