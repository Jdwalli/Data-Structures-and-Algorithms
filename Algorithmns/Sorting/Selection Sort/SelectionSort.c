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

void SelectionSort(int arr[], int arrSize){
    for(int i = 0; i < arrSize - 1; i++){
        int min = i;
        for (int j= i + 1; j  < arrSize; j++){
            if (arr[min] > arr[j]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}


int main()
{
    int arr1[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    printf("Before Selection Sort: ");
    printIntArray(arr1, sizeof(arr1) / sizeof(arr1[0]));
    printf("After Selection Sort: ");
    SelectionSort(arr1, sizeof(arr1) / sizeof(arr1[0]));
    printIntArray(arr1, sizeof(arr1) / sizeof(arr1[0]));
    return 0;
}