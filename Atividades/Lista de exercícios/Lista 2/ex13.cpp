#include <stdio.h>
#include <locale.h>

/* 	Exerc�cio 13: Elabore um algoritmo que leia dois n�meros e imprima qual � maior, qual � menor, ou se
s�o iguais*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int no1, no2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &no1);
	printf("Digite o segundo n�mero: ");
	scanf("%i", &no2);
	
	if (no1 > no2) {
		printf("O primeiro n�mero � maior: %i.", no1);
	} else if (no1 = no2) {
		printf("O primeiro e o segundo n�mero s�o iguais: %i e %i.", no1, no2);
	}
	 else {
		printf("O segundo n�mero � maior: %i.", no2);
	}
}
