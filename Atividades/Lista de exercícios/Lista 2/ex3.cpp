#include <stdio.h>
#include <locale.h>

/* Exerc�cio 03: Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
n�mero informado � maior que dez, se � menor que dez, ou se � igual a dez*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Informe um n�mero real: ");
	scanf("%f", &valor);
	
	if (valor > 10) {
		printf("O valor informado � maior ou igual a dez.");
	} else if (valor == 10) {
		printf("O valor informado � dez.");
	} else {
		printf("O valor informado � menor que dez.");
	}
}
