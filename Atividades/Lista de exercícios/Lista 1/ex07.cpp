#include <stdio.h>
#include <locale.h>

/* Exerc�cio 07: Escreva um programa que solicite ao usu�rio um n�mero inteiro e um n�mero real e ao final
apresente na tela os dois n�meros informados formatando com duas casas decimais
somente o n�mero real da seguinte forma: "Voce informou os numeros N e X.YY" */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num1;
	float num2;
	
	printf("Informe um n�mero inteiro: ");
	scanf("%i", &num1);
	printf("Informe um n�mero real: ");
	scanf("%f", &num2);
	
	printf("Voc� informou os n�meros %i e %.2f.", num1, num2);
}
