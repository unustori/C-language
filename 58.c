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
    int count = 0;
    int num = 2;
    int sum = 0;

    while (count < 10) {
        if (isPrime(num)) {
            sum += num;
            count++;
        }
        num++;
    }

    printf("Сумма десяти первых простых чисел: %d\n", sum);

    return 0;
}
