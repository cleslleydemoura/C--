#include <stdio.h>
#include <locale.h>

/* Exerc�cio 07: Desenvolva um algoritmo que classifique um n�mero inteiro fornecido pelo usu�rio como
par ou �mpar */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Informe um n�mero: ");
	scanf("%i", &valor);
	
	if (valor % 2 == 0) {
		printf("O n�mero informado � par.");
	}
  	else {
  		printf("O n�mero informado � �mpar.");
	  }
}
