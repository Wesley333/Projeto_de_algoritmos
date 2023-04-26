#include<stdio.h>
int main(){
	float cel, fah;
	
	printf("Digite a temperatura em graus celsius:");
	scanf("%f", &cel);
	
	fah=(cel*1.8)+32;
	printf("%.2f graus celsius equivalem a %.2fgraus fahrenhit", cel, fah);
}
