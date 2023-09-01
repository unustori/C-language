#include <stdio.h>

int main() {
    int limit;
    printf("������� ������: ");
    scanf("%d", &limit);

    int prev = 0, curr = 1, sum = 0;

    while (curr <= limit) {
        if (curr % 2 == 0) {
            sum += curr;
        }
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

    printf("����� ������ ����� ���������: %d\n", sum);

    return 0;
}
