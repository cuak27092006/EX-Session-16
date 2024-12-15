#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};

    int size = sizeof(array) / sizeof(array[0]);

    int valueToFind = 30;

    int position = findElement(array, size, valueToFind);

    if (position != -1) {
        printf("Ph?n t? %d du?c tìm th?y t?i v? trí: %d\n", valueToFind, position);
    } else {
        printf("Ph?n t? %d không t?n t?i trong m?ng.\n", valueToFind);
    }

    return 0;
}
int findElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; 
        }
    }
}

