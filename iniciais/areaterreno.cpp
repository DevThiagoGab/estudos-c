#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>


main (){
	float lart, compt, areat;
	setlocale(LC_ALL,"portuguese");
	
	printf("\nDigite a largura do terreno: ");
	scanf("%f",&lart);
	
	printf("\nDigite o comprimento do terreno: ");
	scanf("%f",&compt);
	
	areat=(lart*compt);
	
	printf("\nA área do terreno é: %.f metros quadrados de Área\n\n" ,areat);
	
	system("\npause");
}
