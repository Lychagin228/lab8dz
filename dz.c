#include <stdio.h>

#include <math.h>

#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "RUS");
    double sum = 0.0;
    double x;
    int i;

    printf("���������� ����� sin(1.1) + sin(1.2) + ... + sin(2.0)\n");
    printf("====================================================\n");

    // ���� ��� ���������� ����� �������
    for (i = 1; i <= 10; i++) {
        x = 1.0 + i * 0.1;  // ��������� �������� ���������: 1.1, 1.2, ..., 2.0
        sum += sin(x);      // ��������� sin(x) � �����

        printf("sin(%.1f) = %.6f\n", x, sin(x));
    }

    printf("====================================================\n");
    printf("����� = %.6f\n", sum);

    return 0;
}