#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int horas, minutos;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("\nHora atual (formato 24h): ");
	scanf("%i",&horas);
	minutos=(horas*60);
	
	printf("\nDesde o Inicio do dia até a hora informada se passaram: %.i minutos\n\n", minutos);
	
	system("\npause");
	return 0;
	

}
