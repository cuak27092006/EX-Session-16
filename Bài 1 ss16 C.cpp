#include <stdio.h>

int main() {
    int Mang = 10;

    int *ptr = &Mang;

    printf("Cach 1:\n");
    printf("Gia tri cua Mang: %d\n", Mang);
    printf("�ia chi cua Mang: %p\n", (void*)&Mang);

    printf("C�ch 2:\n");
    printf("Gia tri cua Mang thong qua con tro: %d\n", *ptr);
    printf("�ia chi cua Mang thong qua con tro: %p\n", (void*)ptr);

    return 0;
}

