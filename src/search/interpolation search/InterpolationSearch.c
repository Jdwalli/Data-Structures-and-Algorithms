#include <stdio.h>
#include <stdlib.h>

int interpolationSearch(int arr[], int arrSize, int arrTarget){

    int high = arrSize - 1;
    int low = 0;

    while (arrTarget >= arr[low] && arrTarget <= arr[high] && low <= high) {
        int probe = low + (high - low) * (arrTarget - arr[low]) / (arr[high] - arr[low]);

        if (arr[probe] == arrTarget) {
            return probe;
        } 

        if (arr[probe] < arrTarget) {
            low = probe + 1;
        } else {
            high = probe - 1;
        }
    }
    return -1;
}


int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    int arr3[] = {7, 14, 28, 56, 112, 224, 448, 896, 1792, 3584};
    
    printf("%d\n", interpolationSearch(arr1, sizeof(arr1) / sizeof(arr1[0]), 8));
    printf("%d\n", interpolationSearch(arr2, sizeof(arr2) / sizeof(arr2[0]), 256));
    printf("%d\n", interpolationSearch(arr3, sizeof(arr3) / sizeof(arr3[0]), 56));
    return 0;
}