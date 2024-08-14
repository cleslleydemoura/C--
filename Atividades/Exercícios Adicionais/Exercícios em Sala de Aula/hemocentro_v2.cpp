#include <stdio.h>
#include <locale.h>

/*Escreva um algor�timo que determine se um candidato a doa��o de sangue pode realizar a doa��o com base nos crit�rios:
  1 - Ter entre 16 e 69 anos de idade.
  2 - Pesar ao menos 50kg. */
  
 // Vers�o 2 --> usar OR ( || ) ao inv�s de AND ( && ) 
  
bool ValidarLimiteSuperior(int quantosAnos) {
	printf("\n Passei por aqui... \n");
	return(quantosAnos > 70);
//	Invers�o de sinal (<)
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	float peso;
	
	printf("\n *** BEM-VINDO AO HEMOCENTRO DE BRAS�LIA *** \n");
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
//	If e Else trocados de posi��o.
	
	if (idade < 16 || ValidarLimiteSuperior(idade)) {
//  if (idade >= 16 && ValidarLimiteSuperior(idade))
		printf("Com %i anos voc� n�o possui idade o suficiente para doar sangue.", idade);
	} else {
	
		printf("Informe o seu peso: ");
		scanf("%f", &peso);	
		if (peso > 50) {
			printf("Dirija-se para o guich� X para realizar a doa��o.");
		} else {
			printf("\n Com %i anos, sua idade permite doar!", idade);
			printf("\n Por�m, seu peso de %0.2f n�o est� apropriado para ralizar a doa��o.", peso);
		}
	}
		
}
