#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
    int i;
    float a, b, c, mA, mP;
    
    printf("\nInforme um n�mero inteiro(positivo): ");
    scanf("%i", &i);
    
         printf("\nInforme um valor qualquer: ");
    scanf("%f", &a);
    
             printf("\nInforme um segundo valor qualquer: ");
    scanf("%f", &b);
    
                 printf("\nInforme um terceiro valor qualquer: ");
    scanf("%f", &c);

	if((i%2)==0){
		mA = (a + b + c)/3;
		printf("\nA m�dia aritm�tica dos n�meros %.f, %.f, %.f � %.f.", a, b, c, mA);
	}
	else if(i>10){
		mP = (a + b + c)/(2 + 3 + 4);
		printf("\nA m�dia ponderada � %.2f", mP);
	}

	

}
