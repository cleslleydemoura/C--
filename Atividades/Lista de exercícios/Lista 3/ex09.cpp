#include <stdio.h>
#include <locale.h>

/* Exerc�cio 09: Elabore um algoritmo que solicite ao usu�rio um n�mero inteiro que indicar� a quantidade de vezes que o texto "Hello World!" ser� impresso na tela, um em cada linha. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int loop;
	
	printf("Defina quantas vezes voc� quer que o programa repita a frase 'Hello World!': ");
	scanf("%d", &loop);
	
	for (int i = 0; i < loop; i++) {
		printf("%d - Hellow, World!\n", i + 1);
	}
	
}
