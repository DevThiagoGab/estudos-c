#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[100];
	
	for(int i=1; i<=100; i++) {
		
		printf("Digite o %i° número ", i);
		scanf("%i", &v[i]);
		
	}
	
	for(int i=2; i<=100; i+=2) {
		
		printf("v[%i] = %i\n\n", i, v[i]);
	
	}
	
	system("pause");
	
}
