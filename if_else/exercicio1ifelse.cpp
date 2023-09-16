#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int a, b;
	
	printf("\nDigite o primeiro número: ");
	scanf("%i", &a);
	
		printf("\nDigite o segundo número: ");
	scanf("%i", &b);
	
	if(a==b){
		printf("\nOs números são iguais\n\n");
	}
	else{
		printf("\nOs números não são iguais\n\n");
	}
	
	system("pause");
	
}
