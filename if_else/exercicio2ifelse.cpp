#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float salR, ttlG;
	
	printf("\nInforme o sal�rio: R$ ");
	scanf("%f", &salR);
	
	printf("\nInforme o quanto foi gasto: R$ ");
	scanf("%f", &ttlG);
	
	if(ttlG<salR){
		printf("\nGastos dentro do or�amento\n\n");
	}
	else{
		printf("\nOr�amento estourado\n\n");
	}
	
	system("pause");
	
}
