#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int v[10];
	int par=0;
	
	
	for(int i=1; i<=10; i++)
	{
		
		printf("Digite o %i° numero: ", i);
		scanf("%d", &v[i]);
		
			if(i%2==0)
	{
		
		par = par+1;
		
			}
	
	
		}
	printf("\nA quantidade de números pares é %i\n", par);
	printf("\nA quantidade de números ímpares é %i\n\n", 10-par);
	
	system("pause");

	
}
