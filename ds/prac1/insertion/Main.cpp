#include <iostream>
using namespace std;

void insertAtStart(int arr[], int &n, int ele) {
    for (int i = n; i >= 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = ele;
    n++;
}

void insertAtEnd(int arr[], int &n, int ele) {
    arr[n] = ele;
    n++;
}

void insertAtIndex(int arr[], int &n, int index, int ele) {
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = ele;
    n++;
}

void insertAfterIndex(int arr[], int &n, int index, int ele) {
    for (int i = n; i > index + 1; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index + 1] = ele;
    n++;
}

void insertBeforeIndex(int arr[], int &n, int index, int ele) {
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = ele;
    n++;
}

int main() {
    int arr[100], n = 5;

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; 
    }

    insertAtStart(arr, n, 0);  // Insert 0 at the beginning
    insertAtEnd(arr, n, 6);    // Insert 6 at the end
    insertAtIndex(arr, n, 3, 99);  // Insert 99 at index 3
    insertAfterIndex(arr, n, 3, 88); // Insert 88 after index 3
    insertBeforeIndex(arr, n, 3, 77);  // Insert 77 before index 3

    cout<<"output after all insertion method"<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
