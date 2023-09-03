#include <iostream>
using namespace std;

void deleteAtStart(int arr[], int &n) {
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void deleteAtEnd(int arr[], int &n) {
    n--;
}

void deleteAtIndex(int arr[], int &n, int index) {
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void deleteAfterIndex(int arr[], int &n, int index) {
    for (int i = index + 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void deleteBeforeIndex(int arr[], int &n, int index) {
    for (int i = index - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int arr[100], n = 10;

    cout<<"initial array"<<endl;
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        cout<<arr[i]<<" ";
    }

    deleteAtStart(arr, n);
    deleteAtEnd(arr, n);
    deleteAtIndex(arr, n, 3);
    deleteAfterIndex(arr, n, 3);
    deleteBeforeIndex(arr, n, 3);

    cout<<"\noutput after deletion method"<<endl;
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
