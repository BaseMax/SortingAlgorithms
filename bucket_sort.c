#include <stdio.h>
#include <stdlib.h>

void bucket_sort(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int buckets[max + 1];
    for (int i = 0; i < max + 1; i++) {
        buckets[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        buckets[arr[i]]++;
    }

    int index = 0;
    for (int i = 0; i < max + 1; i++) {
        while (buckets[i] > 0) {
            arr[index++] = i;
            buckets[i]--;
        }
    }
}

int main(int argc, char** argv) {
    int arr[] = { 5, 4, 3, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bucket_sort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
