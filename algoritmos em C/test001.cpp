#include <stdio.h>
int main(){
	int opcao;
	
	printf("Digite 1 para banana , 2 para maca, 3 para laranja,4 para mamao\n");
	scanf("%d", &opcao);
	
	if (opcao == 1){
		printf("Banana: 5,00");
	}else if(opcao == 2){
		printf("maca: 6,00");
	}else if(opcao == 3){
		printf("Laranja: 4,00");
	}else if (opcao == 4){
		printf("Mamao: 5,50");
	}else{
		printf("selecione outra opcao por favor");
	}
	
	return 0;
}
