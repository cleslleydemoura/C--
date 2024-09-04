#include <stdio.h>
#include <conio.h>

struct Aluno { // Declarando um vetor do tipo Struct.
	char  Nome[60];
	int   Idade;
	float Nota[2];
};

int main () {
	struct Aluno vetorAluno[100]; // Declara uma variável do tipo struct.
	int i, j, qtd, qtdNotas;
	char resposta;
	
	printf("Informe a quantidade de alunos: ");
	scanf("%d", &qtd);
	
	for (i = 0; i < qtd; i++) { // Alimentação do vetor.
	printf("\nInforme o nome do %d. aluno(a): ", i + 1);
	scanf(" %[^\n]s", &vetorAluno[i].Nome); // " %[^\n]s" --> diz para o Scanf que se houver espaços em branco " " ele irá considerá-lo.
	printf("Informe a idade de %s: ", vetorAluno[i].Nome);
	scanf("%d", &vetorAluno[i].Idade);
	
	for (qtdNotas = 1; qtdNotas <=2; qtdNotas++) {
	printf("Informe a %d. nota de %s: ", qtdNotas, vetorAluno[i].Nome);
	scanf("%f", &vetorAluno[i].Nota[qtdNotas]);
	}
	}
	
	do { // Resgate e impressão dos dados inseridos dentro do vetor.
	printf("\n");
	printf("Informe a posição do registro a ser impresso: ");
	scanf("%d", &qtd);
	printf("\n Nome: %s", vetorAluno[qtd-1].Nome); // qtd inicia em 0, logo se o usuário pedir por ex. a posição 1, será na verdade, mostrada a posição 0 para ele.
	printf("\n Idade: %i", vetorAluno[qtd-1].Idade);
	printf("\n Notas: ");
	//for (j = 0; j < 2; j++)
    //        printf("%.2f ", vetorAluno[i - 1].Nota[j]);
         
	printf("\n Deseja imprimir outro? [S/N]");
	scanf("%s", &resposta);
	} while (resposta == 'S' || resposta == 's');
}
