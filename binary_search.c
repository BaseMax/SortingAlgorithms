#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// int binary_search(int* arr, int looking_for, int low, int high) {
//     int middle = (int) (high + low) / 2;
//     if (low == high && low == middle && arr[low] == looking_for) {
//         return low;
//     }
//     return -1;
// }

int binarysearch(int* arr, int looking_for, int low, int high) {
    int middle = (int) (high + low) / 2;
    if (low == high && low == middle && arr[low] == looking_for) {
        return low;
    }
    if (arr[middle] == looking_for) {
        return middle;
    }
    if (arr[middle] > looking_for) {
        return binarysearch(arr, looking_for, low, middle);
    }
    if (arr[middle] < looking_for) {
        return binarysearch(arr, looking_for, middle, high);
    }
    return -1;
}

int main () {

    int arr[] = { 1, 3, 5, 9, 13, 17, 25 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int looking_for = 17;
    // int looking_for = 222;

    int found_key = binarysearch(arr, looking_for, 0, n);
    if (found_key == -1) {
        printf("Error: sorry, we are unable to find that value in the array!\n");
    } else {
        printf("We found the %d value at arr[%d]\n");
    }

    return 0;
}