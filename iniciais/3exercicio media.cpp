#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
	float n1, n2, n3, media;
	
	printf("\nDigite a primeira Nota: ");
	scanf("%f",&n1);
	printf("\nDigite a segunda Nota: ");
	scanf("%f",&n2);
	printf("\nDigite a terceira Nota: ");
	scanf("%f",&n3);
	
	media=(n1+n2+n3)/3;
	
	printf("\nSua media eh: %.1f\n\n",media);
	
	system("pause");
}
