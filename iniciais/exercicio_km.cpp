#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int kmI, kmF, dp, kmR;
	float lc, pl, vtg, cc;
	
	printf("\nInforme a quilometragem inicial: ");
	scanf("%i", &kmI);
	
		printf("\nInforme a quilometragem final: ");
	scanf("%i", &kmF);
	
			printf("\nInforme o total de litros consumidos: ");
	scanf("%f", &lc);
	
				printf("\nInforme o pre�o do litro de combust�vel: ");
	scanf("%f", &pl);
	
	dp = kmI+kmF;
	kmR = (kmF-kmI)/lc;
	vtg = lc*pl;
	
	printf("\nA dist�ncia percorrida foi %.i km\n", dp);
	
		printf("\nO valor gasto com combust�vel foi de R$%.2f\n", vtg);
		
				printf("\nO carro percorre %.ikm com 1 litro de combust�vel\n\n", kmR);
	
	system("pause");
	
}

