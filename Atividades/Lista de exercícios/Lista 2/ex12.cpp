#include <stdio.h>
#include <locale.h>

/* Exerc�cio 12: Elabore um algoritmo que indique se um n�mero digitado est� compreendido entre 20 e
90, ou n�o*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int number;
	
	printf("Digite um n�mero: ");
	scanf("%i", &number);
	
	if (number > 20 && number < 90) {
		printf("O n�mero informado est� entre 20 e 90.");
	} else {
		printf("O n�mero informado n�o est� entre 20 e 90.");
	}
}
