#include <stdio.h>
#include <locale.h>

/* Exerc�cio 08: Elabore um algoritmo que leia um n�mero, e se ele for maior do que 20, imprimir a metade
desse n�mero, caso contr�rio, imprimir o dobro do n�mero*/

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int valor;
	
	printf("Informe um n�mero: ");
	scanf("%i", &valor);
	
	if (valor >=20) {
		printf("%i", valor/2);
	}
  	else {
  		printf("%i", valor+valor);
	  }
}
