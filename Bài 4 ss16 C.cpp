#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};

    int size = sizeof(array) / sizeof(array[0]);
    printArray(array, size);

    return 0;
}
void printArray(int *arr, int size) {
    printf("Các ph?n t? trong m?ng là:\n");
    for (int i = 0; i < size; i++) {
        printf("Ph?n t? th? %d: %d\n", i, *(arr + i));
    }
}

