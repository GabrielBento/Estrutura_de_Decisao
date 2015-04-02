//Faça um Programa que peça dois números e imprima o maior deles.
#include<stdio.h>
#include<conio.h>
#define author "Gabriel"

int main(void){
 float num1,num2,maior;
 	
 	printf("Digite o primeiro n\243mero\n");
 	scanf("%f",& num1);
 	
 	printf("Digite o segundo n\243mero\n");
 	scanf("%f",& num2);
 	
 	maior = num1;
 	
 	if(num1<num2){
 		maior=num2;
	 }
printf("O maior n\243mero \202: %.1f\n",maior);
}
