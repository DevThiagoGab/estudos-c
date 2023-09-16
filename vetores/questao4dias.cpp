#include <stdio.h>
#include <locale.h>

int main() {
    
    setlocale(LC_ALL, "portuguese");
	
	int tamanho = 5;
    float vetor1[tamanho];
    float vetor2[tamanho];
    float vetor_resultante[tamanho];

    printf("Digite os valores para o primeiro vetor\n\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%f", &vetor1[i]);
    }

    printf("Digite os valores para o segundo vetor\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%f", &vetor2[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        vetor_resultante[i] = vetor1[i] * vetor2[i];
    }

    printf("Resultado da multiplicação:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vetor_resultante[%d] = %.2f\n", i, vetor_resultante[i]);
    }

}
