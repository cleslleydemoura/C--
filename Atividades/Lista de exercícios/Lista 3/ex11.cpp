#include <stdio.h>
#include <locale.h>

/* Exerc�cio 11: Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de n�meros a serem lidos. Em seguida, leia n n�meros (conforme o valor informado anteriormente) e imprima a soma e a m�dia aritm�tica dos n�meros informados. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int qnt, i;
    float num, soma = 0, media;

    printf("Informe a quantidade de n�meros a serem lidos: ");
    scanf("%d", &qnt);

    for (i = 0; i < qnt; i++) {
        printf("Informe o %d� n�mero: ", i + 1);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / qnt;

    printf("Soma dos n�meros: %.2f\n", soma);
    printf("M�dia dos n�meros: %.2f\n", media);

    return 0;
	
}
