#include <stdio.h>
#include <locale.h>

/* Exerc�cio 02: Escreva um programa que solicite ao usu�rio um n�mero inteiro e ao final apresente na tela
o n�mero informado pelo usu�rio do programa */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Informe um n�mero: ");
	scanf("%i", &numero);
	
	printf("O n�mero informado foi: %i.", numero);
}
