#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};

    int size = sizeof(array) / sizeof(array[0]);
    printArray(array, size);

    return 0;
}
void printArray(int *arr, int size) {
    printf("C�c ph?n t? trong m?ng l�:\n");
    for (int i = 0; i < size; i++) {
        printf("Ph?n t? th? %d: %d\n", i, *(arr + i));
    }
}

