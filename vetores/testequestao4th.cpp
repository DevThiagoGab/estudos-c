#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float v1[5], v2[5], vr[5];
	
	for(int i=0; i<5; i++) {
		
		printf("Digite os valores para o vetor 1: ", i);
		scanf("%f", &v1[i]);
	
	}
	
	for(int i=0; i<5; i++) {
		
		printf("Digite os valores para o vetor 2: ", i);
		scanf("%f", &v2[i]);
	
	}
	
	for(int i=0; i<5; i++) {
		
				vr[i] = v1[i]*v2[i];
	
			printf("\nO resultado da multiplicação dos vetores 1 e 2 é %.f", vr[i]);
		
	}


	
}
