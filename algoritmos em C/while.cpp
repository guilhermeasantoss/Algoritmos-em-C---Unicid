#include <stdio.h>
int main(){
	int x;
	int soma = 0;
	
	printf("Digite um numero:");
	scanf("%d",&x);
	
	while (x != 0){
		printf("Digite outro nuemro");
		soma = soma + x;
		scanf("%d",&x);
	}
	
	printf("soma = %d" , soma);
	return 0;
}
