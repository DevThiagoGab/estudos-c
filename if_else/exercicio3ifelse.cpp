#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num, total;
	
	printf("\nDigite um número inteiro: ");
	scanf("%i", &num);
	
	if(num%5){
		printf("\nO número %i não é divisível por 5\n\n", num);
	}
	else{
		printf("\nO número %i é divisível por 5\n\n", num);
	}
	
	system("pause");
	
}
