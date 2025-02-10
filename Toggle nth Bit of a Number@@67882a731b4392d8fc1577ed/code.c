#include <stdio.h>

int main() {
    int num, position, result;

    scanf("%d %d", &num, &position);

    result = num ^ (1 << position);


    printf("%d\n", result);

    return 0;
}
