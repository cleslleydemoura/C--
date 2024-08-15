#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Para qsort e realloc
#include <string.h> // Para strcmp


// Escreva um algorítimo que solicite ao usuário N valores numéricos e ao final apresente:
// v1: O maior e o menor.
// v2: As medidads de tendência central média, moda e mediana. (Os dois últimos precisa m de vetores)
// v3: Implementar Nome, Idade, Sexo e três notas de N alunos.


// Função para comparar elementos de dois inteiros (usado para qsort)
int comparar(const void *a, const void *b) {
    return (*(float*)a - *(float*)b);
}

// Função para calcular a média
float calcularMedia(float* dados, int qtd) {
    float soma = 0.0;
    for (int i = 0; i < qtd; i++) {
        soma += dados[i];
    }
    return soma / qtd;
}

// Função para calcular a mediana
float calcularMediana(float* dados, int qtd) {
    qsort(dados, qtd, sizeof(float), comparar); // Ordena o vetor
    if (qtd % 2 == 0) {
        return (dados[qtd / 2 - 1] + dados[qtd / 2]) / 2.0;
    } else {
        return dados[qtd / 2];
    }
}

// Função para calcular a moda
void calcularModa(float* dados, int qtd) {
    int* frequencias = (int*)malloc(qtd * sizeof(int));
    int maxFrequencia = 0;
    
    for (int i = 0; i < qtd; i++) {
        frequencias[i] = 0;
        for (int j = 0; j < qtd; j++) {
            if (dados[j] == dados[i]) {
                frequencias[i]++;
            }
        }
        if (frequencias[i] > maxFrequencia) {
            maxFrequencia = frequencias[i];
        }
    }
    
    printf("Moda(s): ");
    for (int i = 0; i < qtd; i++) {
        if (frequencias[i] == maxFrequencia && (i == 0 || dados[i] != dados[i - 1])) {
            printf("%0.2f ", dados[i]);
        }
    }
    printf("\n");
    
    free(frequencias);
}

// Estrutura para armazenar informações dos alunos
typedef struct {
    char nome[50];
    int idade;
    char sexo;
    float notas[3];
} Aluno;

// Função para ler as informações dos alunos
void lerInformacoesAluno(Aluno* aluno) {
    printf("Nome do aluno: ");
    scanf(" %[^\n]", aluno->nome);
    
    printf("Idade do aluno: ");
    scanf("%d", &aluno->idade);
    
    printf("Sexo do aluno (M/F): ");
    scanf(" %c", &aluno->sexo);
    
    for (int i = 0; i < 3; i++) {
        printf("Nota %d do aluno: ", i + 1);
        scanf("%f", &aluno->notas[i]);
    }
}

// Função para imprimir as informações dos alunos
void imprimirInformacoesAluno(const Aluno* aluno) {
    printf("\nNome: %s", aluno->nome);
    printf("\nIdade: %d", aluno->idade);
    printf("\nSexo: %c", aluno->sexo);
    printf("\nNotas: ");
    for (int i = 0; i < 3; i++) {
        printf("%0.2f ", aluno->notas[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    float value, maior, menor;
    int resposta, qtd = 0;
    float* dados = NULL;
    
    // Parte v1: Processamento dos valores numéricos
    do {
        qtd++;
        dados = (float*)realloc(dados, qtd * sizeof(float));
        
        // Entrada de dados
        printf("Informe o %i valor: ", qtd);
        scanf("%f", &value);
        dados[qtd - 1] = value;
        
        // Processamento de dados
        
//		if (qtd == 1 or value > maior) 
//			maior = value;
//	    else if (qtd == 1 or value < menor) 
//			menor = value;

// 			Lógica Na primeira passagem a variável 'qtd' vai ser 1 e cairá na primeira condição sendo assim somente a variável 'Maior' será inicializada
// 			já que na segunda vez em que for acionado a variável 'qtd' será 2.
		
		
        if (qtd == 1) {
            maior = value;
            menor = value;
        } else if (value > maior) {
            maior = value;
        } else if (value < menor) {
            menor = value;
        }
        
        printf("Deseja informar o próximo valor? 1/sim 2/não: ");
        scanf("%i", &resposta);
    } while (resposta == 1);
    
    // Saída de dados
    printf("\nO maior: %0.2f", maior);
    printf("\nO menor: %0.2f", menor);
    
    if (qtd > 0) {
        float media = calcularMedia(dados, qtd);
        float mediana = calcularMediana(dados, qtd);
        
        printf("\nMédia: %0.2f", media);
        printf("\nMediana: %0.2f", mediana);
        calcularModa(dados, qtd);
    }
    
    // Liberar memória
    free(dados);
    
    // Parte v3: Processamento das informações dos alunos
    int numAlunos;
    printf("\nQuantos alunos você deseja cadastrar? ");
    scanf("%d", &numAlunos);
    
    Aluno* alunos = (Aluno*)malloc(numAlunos * sizeof(Aluno));
    
    for (int i = 0; i < numAlunos; i++) {
        printf("\nCadastro do aluno %d:\n", i + 1);
        lerInformacoesAluno(&alunos[i]);
    }
    
    printf("\nInformações dos alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        imprimirInformacoesAluno(&alunos[i]);
    }
    
    // Liberar memória
    free(alunos);
    
    return 0;
}
