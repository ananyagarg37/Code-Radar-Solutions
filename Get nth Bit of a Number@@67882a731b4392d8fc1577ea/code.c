
#include <stdio.h>

int main() {
    int num, position, bitValue;

    
    scanf("%d %d", &num, &position);


    bitValue = (num >> position) & 1;

    printf("%d\n", bitValue);

    return 0;
}
