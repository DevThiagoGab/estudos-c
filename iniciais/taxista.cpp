#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int oid, ofd, qntcg, kml, kmr;
	float vrp, ll, pc, gc;
	pc = 2.59;
	
	printf("\nQuantos quilomentros o odômetro marcou no inicio do dia: ");
	scanf("%i", &oid);
	
		 printf("\nQuantos quilomentros o odômetro marcou no final do dia: ");
	     scanf("%i", &ofd);
	
			 printf("\nInforme a quantidade de combustível gasto: ");
	         scanf("%i", &qntcg);
	
				 printf("\nLucro do dia: R$ ");
	             scanf("%f", &vrp);
	
					 printf("\nCombustível: R$2,59\n");
					 
	
	kmr = ofd - oid;
	kml = kmr/pc;
	gc = qntcg*pc;
	ll = gc-vrp;
	
	printf("\nO carro anda %ikm com 1l de combustível\n\n", kml);
	
		printf("\nO lucro liquido do dia foi de R$%.2f.\n\n", ll);
		
	     	system("pause");
	
}
