#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int num, cont, resul;
	
	printf("Informe o número(entre 1 e 10): ");
	scanf("%i", &num);
	
	if(num>=1 && num<=10)
	{
		
		for(cont=1; cont<=10; cont++)
		{
			
			resul = num*cont;
			printf("\t %i x %i = %i.\n",num, cont, resul );
			
		}
		
		
	}
	else
	{
		
		printf("\nO número não está entre 1 e 10.");
		
	}
	
	system("pause");
	
	
	}
