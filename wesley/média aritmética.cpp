#include<stdio.h>
int main(){
	int numero1, numero2, numero3;
	float media;
	
	printf("Digite um numero: ");
	scanf("%d", &numero1);
	printf("Digite um numero: ");
	scanf("%d", &numero2);
	printf("Digite um numero: ");
	scanf("%d", &numero3);
	media = (numero1 + numero2 + numero3) / 3.0;
	
	printf("A media aritmetica eh: %.1f", media);
}

