#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int arrSize, int arrTarget) {
    int left = 0;
    int right = arrSize - 1;
    int iterations = 0;
    
    while (left <= right) {
        iterations++;
        int middle = (left + right) / 2;
        
        if (arr[middle] == arrTarget) {
            printf("Binary Search completed in %d iteration(s): ", iterations);
            return middle;
        }

        if (arr[middle] < arrTarget) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    
    printf("Binary Search finished after %d iteration(s): ", iterations);
    return -1;
}


int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {10, 20, 30, 40, 50};
    int arr3[] = {5, 10, 10, 15, 20, 20, 25};
    int arr4[] = {-10, -5, 0, 5, 10};
    int arr5[] = {100, 200, 300, 400, 500};
    int arr6[] = {42};
    int arr7[] = {9, 17, 23, 31, 42, 55, 66, 77, 88, 99};
    int largeArray[] = {
        1, 4, 7, 10, 13, 16, 19, 22, 25, 28,
        31, 34, 37, 40, 43, 46, 49, 52, 55, 58,
        61, 64, 67, 70, 73, 76, 79, 82, 85, 88,
        91, 94, 97, 100, 103, 106, 109, 112, 115, 118,
        121, 124, 127, 130, 133, 136, 139, 142, 145, 148,
        151, 154, 157, 160, 163, 166, 169, 172, 175, 178,
        181, 184, 187, 190, 193, 196, 199, 202, 205, 208,
        211, 214, 217, 220, 223, 226, 229, 232, 235, 238,
        241, 244, 247, 250, 253, 256, 259, 262, 265, 268,
        271, 274, 277, 280, 283, 286, 289, 292, 295, 298,
    };
    
    printf("%d\n", binarySearch(arr1, sizeof(arr1) / sizeof(arr1[0]), 17));
    printf("%d\n", binarySearch(arr5, sizeof(arr5) / sizeof(arr5[0]), 500));
    printf("%d\n", binarySearch(arr7, sizeof(arr7) / sizeof(arr7[0]), 55));
    printf("%d\n", binarySearch(arr6, sizeof(arr6) / sizeof(arr6[0]), 42));
    printf("%d\n", binarySearch(largeArray, sizeof(largeArray) / sizeof(largeArray[0]), 298));
    printf("%d\n", binarySearch(largeArray, sizeof(largeArray) / sizeof(largeArray[0]),  4));
    return 0;
}