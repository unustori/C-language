#include <stdio.h>
#include <string.h>

int countSubstring(char *str, char *substr) {
    int count = 0;
    int len = strlen(str);
    int subLen = strlen(substr);

    for (int i = 0; i <= len - subLen; ++i) {
        int match = 1;
        for (int j = 0; j < subLen; ++j) {
            if (str[i + j] != substr[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[100], substr[100];
    
    printf("Введите строку: ");
    scanf("%s", str);

    printf("Введите подстроку: ");
    scanf("%s", substr);

    int substringCount = countSubstring(str, substr);
    printf("Количество вхождений подстроки: %d\n", substringCount);

    return 0;
}
