#include <stdio.h>

int main() {
    int num1, num2, greater;
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        greater = num1;
    } else {
        greater = num2;
    }
    printf("%d\n", greater);
    return 0;
}
