#include<stdio.h>
int main(){
	float pi=3.14, area, raio;
	
	printf("Informe o valor do raio:");
	scanf("%f", &raio);
	
	area = pi*raio*raio;
	
	printf("a area do circulo eh: %.1f", area);
}
