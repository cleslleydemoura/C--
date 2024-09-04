#include <stdio.h>
#include <locale.h>
#include <conio.h>

/* Escreva um algorítimo que solicite a quantidade de avaliações semestrais de um aluno entre uma e dez provas 
e ao final apresente se este foi aprovado ou reprovado conforme as médias aritiméticas de N avaliações.

1) Ao final apresentar a soma das notas e a média aritimética destas.
2) Apresentar a avaliação que obteve a maior nota.
3) Apresentar a avaliação que obteve a pior nota.
4) Solicitar ao usuário no início qual a média da universidade para a aprovação e informar se
o usuário foi aprovado ou não. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	char nomeAluno[60];
	float menorNota, maiorNota;
	float nota[10], media; // nota[valor máximo de notas/avaliações que um aluno pode ter em um semestre.]
	int posicaoMenor, posicaoMaior;
	int i, qtdProvas;
	nota[0] = 0;
	
	do {
		printf("Informe a quantidade de provas (Até 10): ");
		scanf("%i", &qtdProvas);
		printf("Informe a média de notas para a aprovação: ");
		scanf("%f", &media);
		
		 // Mensagem de erro caso o número esteja fora do range
        if (qtdProvas < 1 || qtdProvas > 10) {
            printf("Insira um número entre 1 e 10!\n");
        }
	}
	while (qtdProvas < 1 /* A quatidade de avaliações não poderam ser menor que 1. */ || qtdProvas > 10 /* O número de avaliações não poderá ser maior que 10. */);
	
	printf("Informe o nome do aluno: ");
	scanf("%s", &nomeAluno);
	for(i=1; i<=qtdProvas; i++) {  
	// for (inicialização; condição; incremento):'index = 1'Aqui, a variável index é inicializada com o valor 1. Esta é a primeira etapa do loop e é executada uma vez, antes que o loop comece.
	// 'index <= qtdProvas': Esta é a condição que é verificada antes de cada iteração do loop. Enquanto index for menor ou igual a qtdProvas, o loop continuará a executar. Se a condição for falsa, o loop termina.
	// 'index++': Após a execução do código dentro do loop, index é incrementado em 1 (isto é, index++ é equivalente a index = index + 1). Isso ocorre a cada iteração do loop.
	// O loop começa com index igual a 1. | O código dentro do loop é executado. | Depois, o valor de index é incrementado em 1.
	// A condição index <= qtdProvas é reavaliada. Se for verdadeira, o código dentro do loop é executado novamente. | Isso continua até que index seja maior que qtdProvas, momento em que o loop termina.
		printf("Informe a %i. nota do aluno: ", i);
		scanf("%f", &nota[i]);
		
		// Armazenando notas inseridas pelo usuário
		nota[0] = nota[0] + nota[i]; // nota[na posição 0] vai receber ela mesma (0) + a nota na posição i. (vetor que recebe as notas inceridas pelo usuário)
		// Aqui é utilizada a primeira posição do vetor (0) para armazenar as notas (a soma delas).
		
		// (i == 1): Inicializa 'menorNota' e 'maiorNota' com a primeira nota inserida, e define a posição dessa nota como 'posicaoMenor'.
		
		if (i == 1) { // Verificar se estamos na primeira iteração do loop.
		// No loop, i começa em 1 e vai até qtdProvas (até 10). Quando i é 1, significa que está sendo processada a primeira nota inserida.
			menorNota = nota[1]; // Inicializa 'menorNota' com a primeira nota inserida.
			// A primeira nota ([1]) é atribuída à variável menorNota. Isso estabelece um valor inicial para a 'menorNota'.
			maiorNota = nota[1]; // Inicializar 'maiorNota' com a primeira nota.
			// Isso estabelece o valor inicial para definir a maior nota.
			posicaoMenor = 1; // Registrar a posição da menor nota encontrada até agora.
			// 'posicaoMenor' é definida como 1, que é a posição da primeira nota inserida. Isso indica que a menor nota encontrada até o momento está na posição 1.
			posicaoMaior = 1;
		}
		else if (menorNota > nota[i] /*Aqui se a menorNota for MENOR que a nota que o usuário acabou de digitar, logo ela será armazenada como a menor nota. */) { // Verificar se a nota atual é menor do que a menor nota encontrada até agora.
			// e i não é 1 (ou seja, a posição inicial do vetor), esta condição compara a nota atual ([i]) com 'menorNota'. Se a nota atual for menor, então 'menorNota' será atualizada.
			menorNota = nota[i]; // Atualiza 'menorNota' se a nota atual for menor.
			posicaoMenor = i; // Atualiza a posição da menor nota.
		}
		else if (maiorNota < nota[i]) { // Verifica se a nota atual é maior do que a maior nota encontrada até agora.
		// esta condição compara a nota atual ([i]) com 'maiorNota'. Se a nota atual for maior, então 'maiorNota' será atualizada.
			maiorNota = nota[i]; // Atualiza maiorNota se a nota atual for maior.
			posicaoMaior = i; // Atualizar a posição da maior nota.
		}
	}
	
	printf("A soma das notas inseridas: %.2f", nota[0]);
	printf("\nA média das notas é: %.2f", (nota[0]/qtdProvas) /* Calculando a média de notas. */);
	
	if ((nota[0]/qtdProvas) >= media) {
    	printf(". O aluno %s foi aprovado.\nMaior nota: %.2f \nMenor nota: %.2f", nomeAluno, maiorNota, menorNota);
	} else {
    	printf(". O aluno %s foi reprovado.\nMaior nota: %.2f \nMenor nota: %.2f", nomeAluno, maiorNota, menorNota);
	}
}
