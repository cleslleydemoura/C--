#include <stdio.h>
#include <locale.h>

/* Exerc�cio 04: Escreva um programa que solicite ao usu�rio dois n�meros inteiros e ao final apresente na
tela os dois n�meros informados da seguinte forma: "Voce informou os numeros X e Y" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero1, numero2;
	
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &numero1);
	printf("Informe o segundo n�mero: ");
	scanf("%i", &numero2);
	
	printf("Voc� informou os n�meros %i e %i.", numero1, numero2);
}
