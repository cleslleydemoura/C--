#include <stdio.h>
#include <locale.h>

/* Exerc�cio 14: Elabore um algoritmo que solicite ao usu�rio 10 n�meros reais e ao final apresente o maior e o menor deles. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	double num, maior, menor;

    // Solicitar o primeiro n�mero para inicializar as vari�veis 'maior' e 'menor'.
    printf("Digite o 1� n�mero: ");
    scanf("%lf", &num);
    maior = menor = num;

    for (int i = 2; i <= 10; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%lf", &num);

        if (num > maior) {
            maior = num;
        }

        if (num < menor) {
            menor = num;
        }
    }

    printf("O maior n�mero �: %.2lf\n", maior);
    printf("O menor n�mero �: %.2lf\n", menor);

    return 0;
	
}
