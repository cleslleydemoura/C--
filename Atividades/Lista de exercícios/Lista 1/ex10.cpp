#include <stdio.h>
#include <locale.h>

/* Exerc�cio 10: Escreva um programa que solicite ao usu�rio o nome de uma verdura e uma fruta de sua
preferencia e ao final apresente na tela as informa��es digitadas pelo usu�rio da seguinte
forma: "Voce gosta de AAAAAAA e BBBBBBB"*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char verdura[100], fruta[100];
	printf("Informe uma verdura que voc� goste: ");
	scanf("%s", &verdura);
	printf("Informe uma fruta que voc� goste: ");
	scanf("%s", &fruta);
	
	printf("Voc� gosta de %s e %s", verdura, fruta);
}
