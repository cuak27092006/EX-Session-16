#include <stdio.h>

int main() {
    int Mang = 10;

    int *ptr = &Mang;

    printf("Cach 1:\n");
    printf("Gia tri cua Mang: %d\n", Mang);
    printf("Ðia chi cua Mang: %p\n", (void*)&Mang);

    printf("Cách 2:\n");
    printf("Gia tri cua Mang thong qua con tro: %d\n", *ptr);
    printf("Ðia chi cua Mang thong qua con tro: %p\n", (void*)ptr);

    return 0;
}

