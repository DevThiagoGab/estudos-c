#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int idades, somadasidades=0, qntdidades, cont;
	float media;
	
	printf("Quantas idades ser�o utilizadas: ");
	scanf("%i", &qntdidades);
	
	for(cont=1;cont<=qntdidades; cont++)
	{
		
		printf("Entre com a idade %i: ", cont);
		scanf("%i", &idades);
		somadasidades = somadasidades + idades;
			
	}
	
	media = somadasidades/qntdidades;
	printf("\nA m�dia das idades � de: %.1f\n\n", media);
	
	system("pause");
	
}
