#include <stdio.h>
#include <locale.h>

/*Escreva um algor�timo que determine se um candidato a doa��o de sangue pode realizar a doa��o com base nos crit�rios:
  1 - Ter entre 16 e 69 anos de idade.
  2 - Pesar ao menos 50kg. */
  
bool ValidarLimiteSuperior(int quantosAnos) {
	printf("\n Passei por aqui... \n");
	return(quantosAnos <= 69);
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	float peso;
	
	printf("\n *** BEM-VINDO AO HEMOCENTRO DE BRAS�LIA *** \n");
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 16 && ValidarLimiteSuperior(idade)) {
		printf("Informe seu peso: ");
		scanf("%f", &peso);
		
		if (peso >= 50) {
			printf("Dirija-se para o guich� X para realizar a doa��o.");
		} else {
			printf("Com %i anos, voc� poderia doar, mas seu peso n�o permite.", idade);
		}
	} else {
		printf("Com %i anos voc� n�o possui idade o suficiente para doar sangue.", idade);
	}
}
