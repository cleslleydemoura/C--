#include <stdio.h>
#include <locale.h>

/* Exerc�cio 09: Elabore um algoritmo que leia dois n�meros inteiros e realize a adi��o; caso o resultado
seja maior que 10, imprima o quadrado do resultado, caso contr�rio, imprima a metade dele*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int no1, no2;
	int result = no1 + no2;
	
	printf("Primeiro n�mero: ");
	scanf("%i", &no1);
	printf("Segundo n�mero: ");
	scanf("%i", &no2);
	
	if (result >= 10) {
		printf("%i", result * 2);
	} else {
		printf("%i", result / 2);
	}
}
