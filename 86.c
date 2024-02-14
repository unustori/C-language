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

    int count = 0;

    for (int i = 2; i < limit; ++i) {
        if (isPrime(i)) {
            count++;
        }
    }

    printf("Количество простых чисел, меньших %d: %d\n", limit, count);

    return 0;
}
