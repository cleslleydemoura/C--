#include <stdio.h>
#include <locale.h>

/* Exerc�cio 04: Elabore um algoritmo que imprima 100 vezes o texto "1- Hello World!" com o n�mero. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	for (int num = 1; num <= 100; num++) {
        printf("%d - Hello World!\n", num);
    }

    return 0;	
}
