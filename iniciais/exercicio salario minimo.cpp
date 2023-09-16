#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <strings.h>

int main(){ //primeiro exercicio//
	float salario_min, salario_pessoa, qnt_salario_min;
	
	printf("\ninforme o valor do salario minimo R$");
	scanf("%f",&salario_min);
	
	printf("\ninforme o valor do salario recebido pela pessoa R$");
	scanf("%f",&salario_pessoa);
	
	qnt_salario_min=(salario_pessoa/salario_min);
	
	printf("\nUma pessoa que recebe um salario de R$ %.3f reais recebe %.1f salarios minimos\n\n",salario_pessoa, qnt_salario_min);
	
	system("\npause");
}
