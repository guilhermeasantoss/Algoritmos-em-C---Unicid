#include <stdio.h>
int main(){
	int opcao;
	printf("Digite qual fruta deseja saber:\n 1 para banana , 2 para maca, 3 para laranja,4 para mamao\n");
	scanf("%d",&opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Banana: 5,00");
			break;
			case 2:
			printf("maca: 6,00");
			break;
			case 3:
			printf("Laranja: 4,00");
			break;
			case 4:
				printf("Mamao: 5,50");
			break;
			default:
				printf("Digite um valor valido");
	}
	return 0;
}
