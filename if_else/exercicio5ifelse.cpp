#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int placarjg, time1, time2, vit, der, emp;
	
	printf("\nGols primerio time: ");
	scanf("%i" ,&time1);
	
	printf("\nGols segundo time: ");
	scanf("%i" ,&time2);
	
	if(time1==time2){
		printf("\nEmpate.\n\n");
	}
	else if(time1>time2){
		printf("\nVitória primeiro time.\n\n");
	}
    else if(time1<time2){
    	printf("\nVitória segundo time.\n\n");
	}
	
	system("pause");
	
}
