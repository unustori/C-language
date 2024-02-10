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

int main() {
    int limit;
    
    printf("Введите число: ");
    scanf("%d", &limit);

    int sumPrimes = 0;
    int sumProductPrimes = 0;

    for (int i = 2; i < limit; ++i) {
        if (isPrime(i)) {
            sumPrimes += i;
        }
    }

    for (int i = 2; i < limit; ++i) {
        for (int j = 2; j < limit; ++j) {
            if (isPrime(i) && isPrime(j)) {
                int product = i * j;
                if (product < limit) {
                    sumProductPrimes += product;
                }
            }
        }
    }

    int result = sumPrimes - sumProductPrimes;
    printf("Разница между суммой простых чисел и суммой произведений двух простых чисел меньших %d: %d\n", limit, result);

    return 0;
}
