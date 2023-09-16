#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int tamanho=5;
	float soma=0;
	float vms[tamanho], cms[tamanho]; //salario //calculo da média de salário
	int vnf[tamanho];  //número de filhos
	
	printf("====================================================");
	
	for(int i=1; i<=tamanho; i++) {
		
		printf("\nInforme o salário da %i° família R$ ", i);
		scanf("%f", &vms[i]);
		
		printf("Informe a quantidade de filhos da %i° família: ", i);
		scanf("%i", &vnf);
		
	}
	printf("====================================================");
	
	for(int i=0; i<=tamanho; i++) {
		
		soma = soma + vms[i];
	
	}
		printf("\nA média dos salários é de %.2f\n\n", soma/tamanho);
	system("pause");
	
}
