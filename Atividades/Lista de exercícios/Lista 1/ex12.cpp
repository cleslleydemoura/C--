#include <stdio.h>
#include <locale.h>

/* Exerc�cio 12: Reescrever o programa anterior apresentando o quadrado e o cubo do n�mero informado */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	printf("Informe um n�mero real: ");
	scanf("%f", &num);
	
	
	printf("N�mero informado -> %.2f\n", num);
	printf("O dobro deste n�mero -> %.2f\n", num * 2);
	printf("N�mero informado ao quadrado -> %.2f\n", num * num);
	printf("N�mero informado ao cubo -> %.2f\n", num * num * num);
}
