#include <stdio.h>
#include <locale.h>

/* Exerc�cio 13: Escreva um programa que solicite ao usu�rio dois n�meros inteiros e ao final apresente
na tela a soma dos dois n�meros informados da seguinte forma: "O numeros N e X
somados correspondem a Y" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, result;
	printf("Informe o primeiro n�mero: ");
	scanf("%i", &num1);
	printf("Informe o segundo n�mero: ");
	scanf("%i", &num2);
	
	result = num1 + num2;
	
	
	printf("O numeros %i e %i somados correspondem a %i.", num1, num2, result);
	
}
