#include <stdio.h>
#include <stdlib.h>

void printIntArray(const int arr[], int length) {
    printf("{");
    for (int i = 0; i < length; i++) {
        printf("%d", arr[i]);

        if (i < length - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

void BubbleSortAscend(int arr[], int arrSize){
    for (int i=0; i < arrSize - 1; i++){
        for (int j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void BubbleSortDescend(int arr[], int arrSize){
    for (int i=0; i < arrSize - 1; i++){
        for (int j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main()
{
    int arr1[] = {6, 4, 2, 1, 5, 3, 9, 7, 6, 5, 3, 2, 0, -4};
    int arr2[] = {40, 30, 20, 50, 10};
    int arr3[] = {20, 10, 15, 25, 20, 10, 5};
    int arr4[] = {-20, -2, -7, 12, 0, 70, -5};
    printf("Before Bubble Sort: ");
    printIntArray(arr1, sizeof(arr1) / sizeof(arr1[0]));
    printf("After Ascending Bubble Sort: ");
    BubbleSortAscend(arr1, sizeof(arr1) / sizeof(arr1[0]));
    printIntArray(arr1, sizeof(arr1) / sizeof(arr1[0]));

    // BubbleSort(arr2, sizeof(arr2) / sizeof(arr2[0]));
    // BubbleSort(arr3, sizeof(arr3) / sizeof(arr3[0]));
    // BubbleSort(arr4, sizeof(arr4) / sizeof(arr4[0]));

    return 0;
}