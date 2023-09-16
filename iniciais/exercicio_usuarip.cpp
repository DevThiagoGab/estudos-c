#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	char nomeuser[10];
	
	printf("\nDigite um nome de Usuário: ");
	fflush(stdin);
	scanf("%s", nomeuser);
	
	
	printf("\nUsuário: %s \n\n", nomeuser);
	
	return (0);
	
}
