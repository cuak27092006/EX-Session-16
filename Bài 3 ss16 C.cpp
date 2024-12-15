#include <stdio.h>

void tinhtong(int a, int b, int *result) {
    *result = a + b; 
}

int main() {
    int so1 = 7, so2 = 12;

    int tong = 0;

    tinhtong(so1, so2, &tong);

    printf("T?ng c?a %d và %d là: %d\n", so1, so2, tong);

    return 0;
}

