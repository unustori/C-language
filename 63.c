#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int canBeSumOfPrimes(int num) {
    for (int i = 2; i <= num / 2; ++i) {
        if (isPrime(i) && isPrime(num - i)) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;
    
    printf("¬ведите число: ");
    scanf("%d", &num);

    if (canBeSumOfPrimes(num)) {
        printf("%d - сумма двух простых чисел.\n", num);
    } else {
        printf("%d - не сумма двух простых чисел.\n", num);
    }

    return 0;
}
