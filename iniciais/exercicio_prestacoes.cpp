#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <strings.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"portuguese");
	int totalPrestacoes, totalPrestacoesPGS, qntprestacoesSPGR;
	float vlratualPrestacao, sldDVDr;
	
	printf("\nInforme o valor da presta��o: R$"); //1000//
	scanf("%f", &vlratualPrestacao);
	
	     printf("\nInforme o total de presta��es: "); //12//
	     scanf("%i", &totalPrestacoes);
	
		     printf("\nInforme o total de presta��es pagas: "); //6//
	         scanf("%i", &totalPrestacoesPGS);
	         
    sldDVDr=(vlratualPrestacao*totalPrestacoes)-(totalPrestacoesPGS*vlratualPrestacao);
	qntprestacoesSPGR=totalPrestacoes-totalPrestacoesPGS;
	
	printf("\nFalta(m) R$%.2f at� a quita��o\n", sldDVDr);
		printf("\nFalta(m) %i presta��es a ser(em) paga(s)\n\n", qntprestacoesSPGR);
		
		system("pause");
	
}






