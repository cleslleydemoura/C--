#include <stdio.h>
#include <locale.h>

/* Exerc�cio 06: Escreva um programa que solicite ao usu�rio a temperatura em graus Celsius e ao final
apresente a temperatura correspondente em graus Farenheit. F = Celsius * 1.8 + 32 */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float temperatura;
	
	printf("Informe um valor de temperatura em Celsius para ser convertida em Farenheit: ");
	scanf("%f", &temperatura);
	
	printf("A temperatura informada convertida para Farenheit ficou: %.2f", temperatura * 1.8 + 32);
}
