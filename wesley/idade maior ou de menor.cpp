#include<stdio.h>
int main(){
	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
		if(idade >= 18){
		printf(" Voce eh maior de idade");
	}else{
		printf("voce eh menor de idade");
	}
}
