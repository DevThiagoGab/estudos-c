#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int n;
	
	
	printf("Os números pares entre 1 e 100 são: ");
	for(n=1; n<=100; n++)
	{
		if(n%2==0)
		{
			
			printf("%i ", n);
			
			
		}
		
		
		
	}

	
}
