#include <stdio.h>
#include <locale.h>

// Escreva um algorítimo que solicite ao usuário N valores numéricos e ao final apresente:
// v1: O maior e o menor.
// v2: As medidads de tendência central média, moda e mediana. (Os dois últimos precisa m de vetores)
// v3: Implementar Nome, Idade, Sexo e três notas de N alunos.


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

		// Lógica Na primeira passagem a variável 'qtd' vai ser 1 e cairá na primeira condição sendo assim somente a variável 'Maior' será inicializada
		// já que na segunda vez em que for acionado a variável 'qtd' será 2.


		if (qtd == 1) {
			maior = value;
			menor = value;
		} else if (value > maior) 
			maior = value;
		 else if (value < menor) 
			menor = value;

		printf("Deseja informar o próximo valor? 1/sim 2/não");
		scanf("%i", &resposta);
	} while (resposta == 1);
	
		// Saída de dados.
	
	printf("\n O maior: %0.2f", maior);
	printf("\n O menor: %0.2f", menor);
}

