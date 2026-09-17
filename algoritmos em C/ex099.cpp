#include <stdio.h>
int main(){
	int num1;
	int num2;
	
	
	printf("Digite um numero: \n");
	scanf("%d",&num1);
	
	printf("Digite um numero: \n");
	scanf("%d",&num2);
	
	
	if ( num1 == num2){
		printf("esses numeros sao iguais");
	} else{
		printf("Eles nao sao iguais");
	}
	
	return 0;
}
