#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int tamanho = 10;
	
	float soma=0;
	int vnf[tamanho];  //número de filhos
	float reserv = 0;
	
	float somaf = 0;
	float reserv2 = 0;
	
	
	printf("====================================================");
	
	for(int i=1; i<=tamanho; i++) {
		printf("\nInforme o salário da %i° família R$ ", i);
		scanf("%f", &reserv);
		
		soma += reserv;
		
		printf("Informe a quantidade de filhos da %i° família: ", i);
		scanf("%f", &reserv2);
		
		somaf += reserv2;
		
	}
	printf("====================================================");
	

	printf("\nA média dos salários é de %.2f\n\n", soma/tamanho);
	printf("\nA média dos filhos por familia é de %.2f\n\n", somaf/tamanho);
	system("pause");
	
}
