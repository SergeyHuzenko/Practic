#include <stdio.h>

// Функція для знаходження НОД двох чисел
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

// Функція для знаходження НСК двох чисел
int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int r;
    scanf("%d", &r); // Зчитуємо кількість чисел

    int numbers[r];
    for (int i = 0; i < r; i++) {
        scanf("%d", &numbers[i]); // Зчитуємо числа
    }

    int lcm = numbers[0]; // Ініціалізуємо НСК першим числом

    // Застосовуємо алгоритм для знаходження НСК до всіх чисел
    for (int i = 1; i < r; i++) {
        lcm = findLCM(lcm, numbers[i]);
    }

    printf("%d\n", lcm); // Виводимо результат

    return 0;
}
