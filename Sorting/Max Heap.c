#include <stdio.h>
#include <stdlib.h>
  void swap(int *x, int *y)
  {
    int temp = *x;
    *x = *y;
    *y = temp;
  }
  void heapify(int arr[], int a, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < a && arr[left] > arr[largest])
      largest = left;
    if (right < a && arr[right] > arr[largest])
      largest = right;
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, a, largest);
    }
  }
  void heapSort(int arr[], int a) {
    for (int i = a / 2 - 1; i >= 0; i--)
      heapify(arr, a, i);
    for (int i = a - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
      heapify(arr, i, 0);
    }
  }
  void printArray(int arr[], int a) {
    for (int i = 0; i < a; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  int main() {
    int arr[] = {63,5, 7, 1, 4,31};
    int a = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, a);
    printf("Sorted array is \n");
    printArray(arr, a);
  }
