#include <stdio.h>
#include <locale.h>

/* Exerc�cio 05: Elabore um algoritmo que imprima todos os n�meros decrescentes de 100 at� 0 inclusive. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	for (int num = 100; num >= 0; num--) {
        printf("%d\n", num);
    }

    return 0;
}
