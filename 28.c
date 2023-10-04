#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);

    printf("Факториал %d: %d\n", num, factorial(num));

    return 0;
}
