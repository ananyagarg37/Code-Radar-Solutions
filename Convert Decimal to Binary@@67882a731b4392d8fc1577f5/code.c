#include <stdio.h>

void printBinary(unsigned int num) {
    int leadingZero = 1;

    // Print binary representation
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i)) {
            leadingZero = 0; // Found the first 1, stop skipping
            printf("1");
        } else if (!leadingZero) {
            printf("0");
        }
    }

    // Handle the case when the number is zero
    if (leadingZero) {
        printf("0");
    }

    printf("\n");
}

int main() {
    unsigned int num;

    // Reading the input value
    scanf("%u", &num);

    // Printing the binary representation
    printf(" ", num);
    printBinary(num);

    return 0;
}


