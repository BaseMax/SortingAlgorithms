#include <stdio.h>
#include <stdlib.h>

void slow_sort(int *arr, int n) {
    int temp;
    if (n == 1) {
        return;
    }
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] > arr[n - i - 1]) {
            temp = arr[i];
            arr[i] = arr[n - i - 1];
            arr[n - i - 1] = temp;
        }
    }
    slow_sort(arr, n / 2);
    slow_sort(arr + n / 2, n - n / 2);
}

int main(int argc, char** argv) {
    int arr[] = { 5, 4, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    slow_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
