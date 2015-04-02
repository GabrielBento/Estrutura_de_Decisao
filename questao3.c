//Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
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
