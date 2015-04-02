//Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define author "Gabriel"

int main(void){
char vogal[5],letra;
vogal[0]='A'; vogal[1]='E';
vogal[2]='I'; vogal[3]='O';
vogal[4]='U';

printf("Digite uma letra\n");
printf("Obs Letras Maiusculas\n");
scanf("%c",&letra);

if(letra==vogal[0] | letra==vogal[1] | letra==vogal[2] | letra==vogal[3] | letra==vogal[4]){
	printf("A letra \202 uma vogal\n");
}else {
printf("A letra \202 uma consoante");
}
}

