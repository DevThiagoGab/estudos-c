#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int a, b;
	
	printf("\nDigite o primeiro n�mero: ");
	scanf("%i", &a);
	
		printf("\nDigite o segundo n�mero: ");
	scanf("%i", &b);
	
	if(a==b){
		printf("\nOs n�meros s�o iguais\n\n");
	}
	else{
		printf("\nOs n�meros n�o s�o iguais\n\n");
	}
	
	system("pause");
	
}
