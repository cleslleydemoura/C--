#include <stdio.h>
#include <locale.h>

/* Exerc�cio 08: Escreva um programa que solicite ao usu�rio a primeira letra de seu nome e ao final
apresente na tela a letra informada pelo usu�rio da seguinte forma: "Voce digitou w" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[1];
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	
	printf("A primeira letra do seu nome �: %c", nome[0]);
}
