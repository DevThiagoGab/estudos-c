#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num, total;
	
	printf("\nDigite um n�mero inteiro: ");
	scanf("%i", &num);
	
	if(num%5){
		printf("\nO n�mero %i n�o � divis�vel por 5\n\n", num);
	}
	else{
		printf("\nO n�mero %i � divis�vel por 5\n\n", num);
	}
	
	system("pause");
	
}
