#include <stdio.h>
#include <locale.h>

/* Exerc�cio 07: Elabore um algoritmo que imprima todos os n�meros �mpares de 1000 at� 0. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Todos os numeros �mpares inteiros de 0 a 1000:\n");
	for (int num = 1000; num >= 0; num--) {
		if (num % 2 != 0) {
			printf("%d\n", num);
		}
	}
	
}
