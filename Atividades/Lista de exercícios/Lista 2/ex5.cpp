#include <stdio.h>
#include <locale.h>

/* Exerc�cio 05: . Elabore um algoritmo que leia um n�mero inteiro e imprima uma das mensagens: � m�ltiplo
de 3, ou, n�o � m�ltiplo de 3*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Informe um n�mero: ");
	scanf("%i", &valor);
	
	if (valor % 3 == 0) {
		printf("O valor informado � m�ltiplo de 3.");
	}
  	else {
  		printf("O valor informado n�o � m�ltiplo de 3.");
	  }
}
