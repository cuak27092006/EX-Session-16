#include <stdio.h>

void doi(int *, int *b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;     
}

int main() {
    int x = 5, y = 10;

    printf("Truoc khi doi:\n");
    printf("x = %d, y = %d\n", x, y);


    doi(&x, &y);

    printf("Sau khi doi:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

