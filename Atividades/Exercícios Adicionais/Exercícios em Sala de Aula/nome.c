#include <stdio.h>


int msg (char nome[10]) { // a vari�vel tem que ser colocada aqui para poder ser chamada no c�digo
    printf("Bom dia,  %s\n", nome);
}

int calc_idade() {
    int ano_nasc;
    int ano_atual = 2024;
    printf("Qual � seu ano de nascimento? ");
    scanf("%i", &ano_nasc);
    int idade = ano_atual - ano_nasc;
    
    printf("Sua idade �: %i", idade);
}

int main()
{
    char nome[10];
    printf("Qual � o seu nome? ");
    scanf("%s", &nome);
    msg(nome);
    calc_idade();

}
