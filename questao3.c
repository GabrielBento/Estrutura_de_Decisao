//Fa�a um Programa que verifique se uma letra digitada � "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inv�lido.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define author "Gabriel"

int main(void){
	char letra;
	printf("Digite seu sexo: M - Masculino F - Feminino\n");
	scanf("%c",&letra);
	
	if(letra=='M' | letra=='m') {
		printf("O sexo escolhido foi Masculino");
	}else
	if(letra=='F' | letra=='f'){
	printf("O sexo escolhido foi Feminino");	
	}else	{
	
		printf("Sexo invalido");
	}
}
