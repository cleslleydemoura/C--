#include <stdio.h>
#include <locale.h>

/* Exerc�cio 10: Elabore um algoritmo que solicite ao usu�rio uma palavra e um n�mero inteiro que indicar� a quantidade de vezes que a palavra digitada ser� impressa na tela, um em cada linha. */

int main () {
	setlocale(LC_ALL, "Portuguese");

	char word[200];
	int num;
	
	printf("Digite uma palavra: ");
	gets(word);
	printf("Agora digite quantas repeti��es ter� a palavra: ");
	scanf("%d", &num);
	
	for (int i = 0; i < num; i++) {
		printf("%d - %s\n", i + 1, word);
	}
	
}
