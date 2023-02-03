#include <stdio.h>
#include <stdlib.h>

void stooge_sort(int *arr, int n) {
    if (n == 2 && arr[0] > arr[1]) {
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    } else if (n > 2) {
        int m = n / 3;
        stooge_sort(arr, n - m);
        stooge_sort(arr + m, n - m);
        stooge_sort(arr, n - m);
    }
}

int main(int argc, char** argv) {
    int arr[] = { 5, 4, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    stooge_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
