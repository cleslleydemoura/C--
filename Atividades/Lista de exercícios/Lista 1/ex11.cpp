#include <stdio.h>
#include <locale.h>

/* Exerc�cio 11: Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela o
numero informado e na linha de baixo o dobro deste n�mero da seguinte forma:
Numero -> X
Dobro deste numero -> Y*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	printf("Informe um n�mero real: ");
	scanf("%f", &num);
	
	
	printf("N�mero informado -> %.2f\n", num);
	printf("O dobro deste n�mero -> %.2f", num * 2);
}
