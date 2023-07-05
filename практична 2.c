#include <stdio.h>

// ������� ��� ����������� ��� ���� �����
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

// ������� ��� ����������� ��� ���� �����
int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int r;
    scanf("%d", &r); // ������� ������� �����

    int numbers[r];
    for (int i = 0; i < r; i++) {
        scanf("%d", &numbers[i]); // ������� �����
    }

    int lcm = numbers[0]; // ���������� ��� ������ ������

    // ����������� �������� ��� ����������� ��� �� ��� �����
    for (int i = 1; i < r; i++) {
        lcm = findLCM(lcm, numbers[i]);
    }

    printf("%d\n", lcm); // �������� ���������

    return 0;
}
