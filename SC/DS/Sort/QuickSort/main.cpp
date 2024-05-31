#include <stdio.h>
#include <iostream>

using namespace std;

int Partition(int A[], int low, int high) {
    int pivot = A[low];
    while (low < high) {
        while (low < high && A[high] >= pivot)--high;
        A[low] = A[high];
        while (low < high && A[low] <= pivot)++low;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

void QuickSort(int A[], int low, int high) {
    if (low < high) {
        int p = Partition(A, low, high);
        QuickSort(A, low, p - 1);
        QuickSort(A, p + 1, high);
    }
}

int main() {
    int arr[10] = {7, 1, 3, 9, 2, 6, 1, 7, 3, 5};
    int len = sizeof(arr) / sizeof(int);
    QuickSort(arr, 0, len - 1);
    for (int i = 0; i < len - 1; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}