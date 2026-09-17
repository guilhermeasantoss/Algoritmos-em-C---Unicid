//1- Calcular nota
#include <stdio.h>
int main(){
	float nota1,nota2,nota3, media;
	
	printf("Digite sua nota : ");
	scanf("%f" , &nota1);
	
	printf("Digite outra nota: ");
	scanf("%f", &nota2);
	
	printf("Digite outra nota: ");
	scanf("%f", &nota3);
	
	media= (nota1+nota2+nota3)/3;
	
	printf("Sua media final e: %f",media);
	
	
}
