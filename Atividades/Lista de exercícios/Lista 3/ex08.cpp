#include <stdio.h>
#include <locale.h>

/* Exerc�cio 08: Elabore um algoritmo que imprima a soma dos 100 primeiros n�meros inteiros positivos. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int soma = 0;
    int i;

    for (i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos 100 primeiros n�meros inteiros positivos �: %d\n", soma);

    return 0;
	
}
