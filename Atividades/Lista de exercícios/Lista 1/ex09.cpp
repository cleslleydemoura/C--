#include <stdio.h>
#include <locale.h>

/* Exerc�cio 09: Escreva um programa que solicite ao usu�rio o nome de sua cor preferida e ao final
apresente na tela a cor informada pelo usu�rio da seguinte forma: "Voce gosta da cor AAA" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char cor[100];
	printf("Informe sua cor favorita: ");
	scanf("%s", &cor);
	
	printf("Voc� gosta da cor: %s", cor);
}
