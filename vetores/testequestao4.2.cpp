#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float v1[2], v2[2], v3[2];
	
	for(int i=1; i<=2; i++) {
		
		printf("Digite o %i° número: ", i);
		scanf("%f", &v1[i]);
	
	}
	
	for(int i=1; i<=2; i++) {
		
		printf("Digite o %i° número: ", i+2);
		scanf("%f", &v2[i]);
	
	v3[i] = v1[i]*v2[i];
	
	printf("O resultado da multiplicação dos vetores 1 e 2 é %.f\n", v3[i]);
	
	}
	
	
}
