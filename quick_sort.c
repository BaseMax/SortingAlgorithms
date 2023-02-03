#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *arr, int n) {
    int temp;
    int pivot = arr[n / 2];
    int i = 0;
    int j = n - 1;
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    if (j > 0) {
        quick_sort(arr, j + 1);
    }
    if (i < n) {
        quick_sort(arr + i, n - i);
    }
}

int main(int argc, char** argv) {
    int arr[] = { 5, 4, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
