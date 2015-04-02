//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
#include<stdio.h>
#include<conio.h>
#define author "Gabriel"

int main(void){
	
	float num;
	printf("Digite o n\243mero \n");
	scanf("%f",&num);
	if(num>0){
		printf("O valor \202 positivo\n");
	} else
	if(num<0){
		printf("O valor \202 negativo\n");
	} else
	if(num==0){
		printf("O valor nem \202 positivo e nem negativo\n");
	}
	
}
