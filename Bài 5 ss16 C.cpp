#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};

    int size = sizeof(array) / sizeof(array[0]);

    printf("M?ng ban d?u:\n");
    printArray(array, size);

    int indexToUpdate = 2;  
    int newValue = 99;     
    updateElement(array, size, indexToUpdate, newValue);

    printf("M?ng sau khi c?p nh?t:\n");
    printArray(array, size);

    return 0;
}

void updateElement(int *arr, int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue; 
    } else {
        printf("V? trí %d không h?p l?!\n", index);
    }
}

void printArray(int *arr, int size) {
    printf("Các ph?n t? trong m?ng là:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

