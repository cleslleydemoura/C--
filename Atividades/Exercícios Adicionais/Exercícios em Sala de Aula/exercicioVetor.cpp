#include <stdio.h>
#include <locale.h>
#include <conio.h>

/* Escreva um algor�timo que solicite a quantidade de avalia��es semestrais de um aluno entre uma e dez provas 
e ao final apresente se este foi aprovado ou reprovado conforme as m�dias aritim�ticas de N avalia��es.

1) Ao final apresentar a soma das notas e a m�dia aritim�tica destas.
2) Apresentar a avalia��o que obteve a maior nota.
3) Apresentar a avalia��o que obteve a pior nota.
4) Solicitar ao usu�rio no in�cio qual a m�dia da universidade para a aprova��o e informar se
o usu�rio foi aprovado ou n�o. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	char nomeAluno[60];
	float menorNota, maiorNota;
	float nota[10], media; // nota[valor m�ximo de notas/avalia��es que um aluno pode ter em um semestre.]
	int posicaoMenor, posicaoMaior;
	int i, qtdProvas;
	nota[0] = 0;
	
	do {
		printf("Informe a quantidade de provas (At� 10): ");
		scanf("%i", &qtdProvas);
		printf("Informe a m�dia de notas para a aprova��o: ");
		scanf("%f", &media);
		
		 // Mensagem de erro caso o n�mero esteja fora do range
        if (qtdProvas < 1 || qtdProvas > 10) {
            printf("Insira um n�mero entre 1 e 10!\n");
        }
	}
	while (qtdProvas < 1 /* A quatidade de avalia��es n�o poderam ser menor que 1. */ || qtdProvas > 10 /* O n�mero de avalia��es n�o poder� ser maior que 10. */);
	
	printf("Informe o nome do aluno: ");
	scanf("%s", &nomeAluno);
	for(i=1; i<=qtdProvas; i++) {  
	// for (inicializa��o; condi��o; incremento):'index = 1'Aqui, a vari�vel index � inicializada com o valor 1. Esta � a primeira etapa do loop e � executada uma vez, antes que o loop comece.
	// 'index <= qtdProvas': Esta � a condi��o que � verificada antes de cada itera��o do loop. Enquanto index for menor ou igual a qtdProvas, o loop continuar� a executar. Se a condi��o for falsa, o loop termina.
	// 'index++': Ap�s a execu��o do c�digo dentro do loop, index � incrementado em 1 (isto �, index++ � equivalente a index = index + 1). Isso ocorre a cada itera��o do loop.
	// O loop come�a com index igual a 1. | O c�digo dentro do loop � executado. | Depois, o valor de index � incrementado em 1.
	// A condi��o index <= qtdProvas � reavaliada. Se for verdadeira, o c�digo dentro do loop � executado novamente. | Isso continua at� que index seja maior que qtdProvas, momento em que o loop termina.
		printf("Informe a %i. nota do aluno: ", i);
		scanf("%f", &nota[i]);
		
		// Armazenando notas inseridas pelo usu�rio
		nota[0] = nota[0] + nota[i]; // nota[na posi��o 0] vai receber ela mesma (0) + a nota na posi��o i. (vetor que recebe as notas inceridas pelo usu�rio)
		// Aqui � utilizada a primeira posi��o do vetor (0) para armazenar as notas (a soma delas).
		
		// (i == 1): Inicializa 'menorNota' e 'maiorNota' com a primeira nota inserida, e define a posi��o dessa nota como 'posicaoMenor'.
		
		if (i == 1) { // Verificar se estamos na primeira itera��o do loop.
		// No loop, i come�a em 1 e vai at� qtdProvas (at� 10). Quando i � 1, significa que est� sendo processada a primeira nota inserida.
			menorNota = nota[1]; // Inicializa 'menorNota' com a primeira nota inserida.
			// A primeira nota ([1]) � atribu�da � vari�vel menorNota. Isso estabelece um valor inicial para a 'menorNota'.
			maiorNota = nota[1]; // Inicializar 'maiorNota' com a primeira nota.
			// Isso estabelece o valor inicial para definir a maior nota.
			posicaoMenor = 1; // Registrar a posi��o da menor nota encontrada at� agora.
			// 'posicaoMenor' � definida como 1, que � a posi��o da primeira nota inserida. Isso indica que a menor nota encontrada at� o momento est� na posi��o 1.
			posicaoMaior = 1;
		}
		else if (menorNota > nota[i] /*Aqui se a menorNota for MENOR que a nota que o usu�rio acabou de digitar, logo ela ser� armazenada como a menor nota. */) { // Verificar se a nota atual � menor do que a menor nota encontrada at� agora.
			// e i n�o � 1 (ou seja, a posi��o inicial do vetor), esta condi��o compara a nota atual ([i]) com 'menorNota'. Se a nota atual for menor, ent�o 'menorNota' ser� atualizada.
			menorNota = nota[i]; // Atualiza 'menorNota' se a nota atual for menor.
			posicaoMenor = i; // Atualiza a posi��o da menor nota.
		}
		else if (maiorNota < nota[i]) { // Verifica se a nota atual � maior do que a maior nota encontrada at� agora.
		// esta condi��o compara a nota atual ([i]) com 'maiorNota'. Se a nota atual for maior, ent�o 'maiorNota' ser� atualizada.
			maiorNota = nota[i]; // Atualiza maiorNota se a nota atual for maior.
			posicaoMaior = i; // Atualizar a posi��o da maior nota.
		}
	}
	
	printf("A soma das notas inseridas: %.2f", nota[0]);
	printf("\nA m�dia das notas �: %.2f", (nota[0]/qtdProvas) /* Calculando a m�dia de notas. */);
	
	if ((nota[0]/qtdProvas) >= media) {
    	printf(". O aluno %s foi aprovado.\nMaior nota: %.2f \nMenor nota: %.2f", nomeAluno, maiorNota, menorNota);
	} else {
    	printf(". O aluno %s foi reprovado.\nMaior nota: %.2f \nMenor nota: %.2f", nomeAluno, maiorNota, menorNota);
	}
}
