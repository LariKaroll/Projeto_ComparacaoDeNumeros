#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	int n1,n2,n3,saida;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	if(n1>n2){
		if(n1>n3){
			printf("n1 eh o maior");
		}
	}
	if(n2>n1){
		if(n2>n3){
			printf("n2 eh o maior");
		}
	}
	if(n3>n1){
		if(n3>n2){
			printf("n3 eh o maior");
		}
	}
}
