#include <stdio.h>
#include <locale.h>

/* Exerc�cio 01: Elabore um programa que solicite ao usu�rio um n�mero real e ao final 
imprima na tela se o n�mero informado � maior que 10 (dez) */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Informe um n�mero real: ");
	scanf("%f", &valor);
	
	if (valor > 10) {
		printf("O valor informado � maior que dez.");
	} else {
		printf("O valor informado � menor que dez.");
	}
}

