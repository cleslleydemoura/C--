#include <stdio.h>
#include <locale.h>

/* Exerc�cio 05: Escreva um programa que solicite ao usu�rio um n�mero real e ao final apresente na tela o
n�mero informado formatado com duas casas decimais da seguinte forma: "Voce informou o numero X.YY"*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float numero;
	
	printf("Informe um n�mero real: ");
	scanf("%f", &numero);
	
	printf("Voc� informou o n�mero %.2f.", numero);
}
