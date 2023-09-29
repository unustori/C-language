#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d - палиндром.\n", num);
    } else {
        printf("%d - не палиндром.\n", num);
    }

    return 0;
}
