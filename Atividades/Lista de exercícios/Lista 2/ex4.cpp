#include <stdio.h>
#include <locale.h>

/* Exerc�cio 04: Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
n�mero informado � positivo, negativo ou nulo (zero)*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Informe um n�mero real: ");
	scanf("%f", &valor);
	
	if (valor > 0) {
		printf("O n�mero informado � positivo.");
	} else if (valor < 0) {
		printf("O n�mero informado � negativo.");
	} else {
		printf("O n�mero informado � zero.");
	}
}
