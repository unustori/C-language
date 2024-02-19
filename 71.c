#include <stdio.h>

int isDecimalPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);

    if (isDecimalPalindrome(num)) {
        printf("%d - десятичный палиндром.\n", num);
    } else {
        printf("%d - не десятичный палиндром.\n", num);
    }

    return 0;
}
