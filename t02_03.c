// 12S25008 - Rafli Batubara

#include <stdio.h>

struct MesinHitung {
    char operator;
    int total;
};

int main() {
    struct MesinHitung calc;
    int angka;

    scanf("%c", &calc.operator);

    if (calc.operator == '*') {
        calc.total = 1;
    } else {
        calc.total = 0;
    }

    for (int i = 0; i < 4; i++) {
        scanf("%d", &angka);

        if (angka == -1) {
            printf("0\n");
            break;
        }

        if (calc.operator == '+') {
            calc.total += angka;
        } else if (calc.operator == '-') {
            calc.total -= angka;
        } else if (calc.operator == '*') {
            calc.total *= angka;
        }

        printf("%d\n", calc.total);
    }

    return 0;
}