#include <stdio.h>
#include <locale.h>

/* Exerc�cio 03: Escreva um programa que solicite ao usu�rio um n�mero inteiro e ao final apresente na tela
o n�mero informado da seguinte forma: "Foi informado o valor: X" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Informe um n�mero: ");
	scanf("%i", &numero);
	
	printf("Foi informado o valor: %i.", numero);
}
