#include <stdio.h>

int main() {
    int num, position, result;

    scanf("%d %d", &num, &position);

    int mask = ~(1 << position);

    result = num & mask;

    printf("%d\n", result);

    return 0;
}
