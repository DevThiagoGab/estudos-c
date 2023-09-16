#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float v1[2], v2[2], v3[2];

    for (int i = 0; i < 2; i++) {
        printf("Digite o %i° número: ", i + 1);
        scanf("%f", &v1[i]);
    }

    for (int i = 0; i < 2; i++) {
        printf("Digite o %i° número: ", i + 3);
        scanf("%f", &v2[i]);
        v3[i] = v1[i] * v2[i];
        printf("O resultado da multiplicação dos vetores 1 e 2 é %.f\n", v3[i]);
    }

    return 0;
}
