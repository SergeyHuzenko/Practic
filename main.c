#include <stdio.h>

int main() {
    int t1, t2, t3;
    float total_time; // Змінна для збереження загального часу

    // Зчитування вхідних даних
    scanf("%d %d %d", &t1, &t2, &t3);

    // Обчислення загального часу
    total_time = t1 + t2 + t3;

    // Виведення результату з округленням до 2 знаків після коми
    printf("%.2f\n", total_time);

    return 0;
}
