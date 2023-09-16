#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
		setlocale(LC_ALL, "portuguese");
	
	int num, par, impar, cont, soma;
	
	for(cont=1; cont<=10; cont++)
	{
		
		printf("Digite o %i° número: ", cont);
		scanf("%i", &num);
		
			if(num%2==0)
		{
			par = par+1;
		}
	
	}
	printf("\nQuantidade de números pares são: %i \n", par);
	printf("Quantidade de números ímpares são: %i", 10-par);


}
