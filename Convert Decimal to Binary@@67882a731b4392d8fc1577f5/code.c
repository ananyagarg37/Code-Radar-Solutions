#include <stdio.h>

void printBinary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
}

int main() {
    unsigned int num;

    // Reading the input value
    scanf("%u", &num);

    // Printing the binary representation
    printf("Binary representation of %u: ", num);
    printBinary(num);

    return 0;
}

