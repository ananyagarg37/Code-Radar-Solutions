#include <stdio.h>

int main() {
    int a, b;

    // Reading the input values
    scanf("%d %d", &a, &b);

    // Swapping the values using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%d %d\n", a, b);

    return 0;
}
