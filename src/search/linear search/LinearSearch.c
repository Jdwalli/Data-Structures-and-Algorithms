#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int arrSize, int arrTarget) {
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == arrTarget) {
            return i;
        }
    }
    return -1;
}


int main()
{
    int arr1[] = {6, 4, 2, 1, 5, 3};
int arr2[] = {40, 30, 20, 50, 10};
int arr3[] = {20, 10, 15, 25, 20, 10, 5};
int arr4[] = {0, -5, -10, 10, 5};
int arr5[] = {500, 300, 200, 100, 400};
int arr6[] = {42};
int arr7[] = {66, 31, 88, 55, 9, 17, 99, 23, 77, 42};
int largeArray[] = {
    175, 148, 202, 250, 139, 286, 115, 190, 292, 118,
    274, 283, 178, 196, 172, 283, 130, 223, 250, 97,
    259, 295, 265, 154, 145, 250, 190, 112, 244, 211,
    286, 157, 220, 259, 202, 97, 121, 268, 184, 127,
    67, 109, 154, 283, 184, 268, 202, 250, 67, 136,
    292, 151, 271, 118, 247, 103, 247, 274, 85, 136,
    139, 238, 136, 286, 154, 121, 238, 136, 241, 154,
    154, 154, 118, 130, 139, 202, 121, 196, 184, 271,
    223, 109, 127, 97, 241, 289, 184, 286, 211, 283,
    112, 151, 265, 268, 145, 250, 175, 202, 259, 202,
};
    
    printf("%d\n", linearSearch(arr1, sizeof(arr1) / sizeof(arr1[0]), 17));
    printf("%d\n", linearSearch(arr5, sizeof(arr5) / sizeof(arr5[0]), 500));
    printf("%d\n", linearSearch(arr7, sizeof(arr7) / sizeof(arr7[0]), 99));
    printf("%d\n", linearSearch(arr6, sizeof(arr6) / sizeof(arr6[0]), 42));
    printf("%d\n", linearSearch(largeArray, sizeof(largeArray) / sizeof(largeArray[0]), 298));
    printf("%d\n", linearSearch(largeArray, sizeof(largeArray) / sizeof(largeArray[0]),  4));
    return 0;
}