#include <stdio.h>
#include <locale.h>

/* Exerc�cio 10: O sistema de avalia��o de determinada disciplina � composto por tr�s provas. A primeira
prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a
m�dia para aprova��o � 6.0, fa�a um algoritmo para calcular a m�dia final de um aluno
desta disciplina e dizer se o aluno foi aprovado ou n�o*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float p1, p2, p3;
	float maxp1;
	float maxp2;
	float maxp3;
	
	printf("DIgite a nota da primeira prova: ");
	scanf("%f", &p1);
	printf("DIgite a nota da segunda prova: ");
	scanf("%f", &p2);
	printf("DIgite a nota da terceira prova: ");
	scanf("%f", &p3);
	
	
	float media_final = p1 + p2 + p3;
	
	if (maxp1 > 2) {
		printf("Nota inv�lida.");
	} else if (maxp2 > 3) {
		printf("Nota inv�lida.");
	} else if (maxp3 > 5) {
		printf("Nota inv�lida.");
	} else {
	if (media_final >= 6) {
		printf("Aluno aprovado.");
	} else {
		printf("Aluno reprovado.");
	}
	}
	
}
