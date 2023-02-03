#include <stdio.h>
#include <stdlib.h>

void counting_sort(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    int *count = (int *)malloc(sizeof(int) * (max + 1));
    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[j++] = i;
            count[i]--;
        }
    }
    free(count);
}

int main(int argc, char** argv) {
    int arr[] = { 5, 4, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    counting_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
