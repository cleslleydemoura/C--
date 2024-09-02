#include <stdio.h>
#include <locale.h>
//Versao01: Medir maior e menor idade, e calcular a média das idades dos alunos
//Versao02: Calcular a moda e a mediana das idades dos alunos
//Versao03: Solicitar ao usuario, alem das idades:
// O nome do aluno
// Sexo (M/F)
// As tres notas do aluno
// Ao final apresentar:
// Percentual de Alunas e Alunos aprovados e reprovados <-
// Percentual de Alunos aprovados/reprovados com mais de 20 <-
// Relatorio com os nome e medias dos alunos aprovados e reprovados <-
// Configurar a media de aprovacao na faculdade e a quantidade de provas
// Tratar entrada de dados nao permitindo:
// genero diferente de M e F (tanto faz maiusculo ou minusculo)
// Idade < 16 e nem > 100 anos (nao pode)
// Notas menores que zero nem maiores que dez

// Criando a estrutura de dados Aluno
struct Aluno {
char Nome[20]; // String
char Sexo;     // Caracter
int Idade;     // Inteiro
float Notas[10];// Real
bool Aprovado; // booleano (true/false)
};

int main () {
int Qtd, menor, maior, repetidos[100] = {0}, somaMediana;
float soma=0, aux;
char resposta;
setlocale(LC_ALL, "Portuguese");
// O tipo de dados abaixo foi criado por nos na linha 14
struct Aluno Turma[100]; // Declarando o vetor Turma com 100 posicoes do tipo Aluno
Qtd=0;
do {

// Solicitando o nome dos alunos...
printf(" Informe o nome do %d° aluno: ", Qtd+1);
scanf("%s", &Turma[Qtd].Nome);

// Solicitando o sexo dos alunos...
do {
 printf(" Informe o sexo de %s: ", Turma[Qtd].Nome);
 scanf("%s", &Turma[Qtd].Sexo);
 } while (Turma[Qtd].Sexo != 'M' && Turma[Qtd].Sexo != 'm' &&
          Turma[Qtd].Sexo != 'F' && Turma[Qtd].Sexo != 'f');

// Solicitando a idade dos alunos...
do {
 printf(" Informe a idade de %s: ", Turma[Qtd].Nome);
 scanf("%i", &Turma[Qtd].Idade);
} while (Turma[Qtd].Idade<16 or Turma[Qtd].Idade>100);  

// Solicitando as tres notas do aluno
Turma[Qtd].Notas[0]=0;
for (int i=1; i<=3; i++) {
 printf(" Informe a %i. nota: ", i);
 scanf("%f", &Turma[Qtd].Notas[i]);
 // Calculando a somatoria das notas desse aluno
 Turma[Qtd].Notas[0] = Turma[Qtd].Notas[0]+Turma[Qtd].Notas[i];
}
Turma[Qtd].Aprovado = (Turma[Qtd].Notas[0] / 3) >= 6; // Ainda esta hard coded!!!

soma+=Turma[Qtd].Idade;

if (Qtd==0) { // No primeiro aluno inicializamos as variaveis
menor = Turma[0].Idade; // <- Preferiremos esse
maior = Turma[Qtd].Idade;
}
else { // ...do segundo aluno em diante, testamos se a nova idade é maior ou menor
if (menor > Turma[Qtd].Idade)
menor = Turma[Qtd].Idade;
else if (maior < Turma[Qtd].Idade)
maior = Turma[Qtd].Idade;
}
printf("\n Deseja informar o próximo aluno? Sim-Não ");
scanf("%s", &resposta);
Qtd++;
} while (resposta == 's' || resposta == 'S');

  // Calculando a moda...  
  for (int j=0; j<Qtd; j++)
    repetidos[j]=0;
   
for (int j=0; j<Qtd; j++)
for (int k=j+1; k<Qtd; k++)
if (Turma[j].Idade==Turma[k].Idade)
repetidos[j]++;

  int moda=0;
  int numModa=0;

for (int j=0; j<Qtd; j++)
if (moda < repetidos[j]) {
moda = repetidos[j];
 numModa = Turma[j].Idade;
}


//Calculando a mediana...
//Ordenando a amostra com BubleSort pra calcular a mediana mais tarde...
int idades[Qtd];
for (int j=0; j<Qtd; j++)
 idades[j] = Turma[j].Idade;
 
for (int j=0; j<Qtd; j++)
for (int k=0; k<Qtd-1-j; k++)
if (idades[k]>idades[k+1]) {
aux = idades[k];
idades[k] = idades[k+1];
idades[k+1] = aux;
}

float mediana;
if (Qtd%2==0)  // Se a amostra for par, entao mediana = media aritmetica do centro
mediana = (idades[Qtd/2] + idades[(Qtd/2)+1]) / 2;
else  // Se a amostra for impar, entao mediana = elemento do centro
mediana = idades[Qtd/2];


printf("\n Menor valor: %d", menor);
printf("\n Maior valor: %d", maior);
printf("\n Media das idades: %0.1f", (soma/Qtd));
printf("\n Moda: %d (%d vezes)", numModa, moda);
printf("\n Mediana: %0.1f", mediana);

}
