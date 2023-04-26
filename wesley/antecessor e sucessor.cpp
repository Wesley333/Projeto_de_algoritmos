#include<stdio.h>

int main(){
	int num, ant, suc;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	ant= num-1;
	suc= num+1;
	
	printf("O antecessor do numero informado eh: %d, e o sucessor eh: %d", ant, suc);
	
	
}
