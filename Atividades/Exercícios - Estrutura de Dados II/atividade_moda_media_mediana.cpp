#include <stdio.h>
#include <locale.h>

// Escreva um algor�timo que solicite ao usu�rio N valores num�ricos e ao final apresente:
// v1: O maior e o menor.
// v2: As medidads de tend�ncia central m�dia, moda e mediana. (Os dois �ltimos precisa m de vetores)
// v3: Implementar Nome, Idade, Sexo e tr�s notas de N alunos.


int main () {
	setlocale(LC_ALL, "Portuguese");
	float value, maior, menor;
	int resposta, qtd = 0;
	
	do {
		qtd++;
		// Entrada de dados.
		printf("Informe o %i valor: ", qtd);
		scanf("%f", &value);
		// Processamento de dados.
		
//		if (qtd == 1 or value > maior) 
//			maior = value;
//		 else if (qtd == 1 or value < menor) 
//			menor = value;

		// L�gica Na primeira passagem a vari�vel 'qtd' vai ser 1 e cair� na primeira condi��o sendo assim somente a vari�vel 'Maior' ser� inicializada
		// j� que na segunda vez em que for acionado a vari�vel 'qtd' ser� 2.


		if (qtd == 1) {
			maior = value;
			menor = value;
		} else if (value > maior) 
			maior = value;
		 else if (value < menor) 
			menor = value;

		printf("Deseja informar o pr�ximo valor? 1/sim 2/n�o");
		scanf("%i", &resposta);
	} while (resposta == 1);
	
		// Sa�da de dados.
	
	printf("\n O maior: %0.2f", maior);
	printf("\n O menor: %0.2f", menor);
}

