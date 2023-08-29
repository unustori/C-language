#include <stdio.h>

int main() {
    int n;
    printf("¬ведите размер массива: ");
    scanf("%d", &n);

    int arr[n];
    printf("¬ведите %d элементов массива:\n", n);
    
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    double average = (double) sum / n;
    printf("—реднее арифметическое: %lf\n", average);

    return 0;
}
