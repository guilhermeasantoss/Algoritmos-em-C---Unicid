#include <stdio.h>
int main(){
	float saldo;
	float saque; 
	
	printf("Informe seu saldo: \n");
	scanf("%f",&saldo);

	while(saldo>0){
		printf("Digite  valor que deseja retirar:");
		saldo = saldo - saque;
		scanf("%f",&saldo);
	}
	printf("Conta zerada");
		
	
	return 0;
}
