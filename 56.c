#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = (int) log10(num) + 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return original == sum;
}

int main() {
    int limit;
    
    printf("Введите предел: ");
    scanf("%d", &limit);

    printf("Числа Армстронга до %d: ", limit);

    for (int i = 1; i <= limit; ++i) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
