#include <stdio.h>

int main () {
	float fltNumero[11], fltMenorValor;
	
	for(int i = 1; i <=10; i++) {
		printf("Informe o numero: ");
		scanf("%f", &fltNumero[1]);
			if (i == 1) {
		fltMenorValor = fltNumero[1];
			} else if (fltNumero[i] < fltMenorValor) {
		fltMenorValor = fltNumero[i];
			}
	}
	
	printf("\n O menor numero eh: %.2f", fltMenorValor);
}

//  Analise o algoritmo apresentado e aponte abaixo a alternativa INCORRETA:

//	A) Na linha 6 do programa, o valor "1" poderia ser trocado pelo valor "i" ficando o código da seguinte forma: "fItMenor Valor = ftNumero[i];"
//	sem introduzir erro de sintaxe ou lógica ao programa, e sem incorrer em prejuízo algum ao funcionamento do algoritimo.

//	B) Na linha 5 do programa, o comando "if (i= 1)" poderia ser substituído pelo comando "if (i <= 1)" sem introduzir erro de sintaxe ou lógica ao programa,
//	e sem incorrer em prejuízo algum ao funcionamento do algoritmo

//	C) Na linha do 7 do programa, o comando apresentado poderia ser substituído por "else if (fItMenor Valor > fItNumerofil) {"
//	sem introduzir erro de sintaxe ou lógica ao programa, e sem incorrer em prejuízo algum ao funcionamento do algoritmo.

//	D) Na linha 2 do programa, o comando "for (int i=1; <=10; i++) {" poderia ser substituído pelo comando "for (int i=0; i<=9; i++) {"
//	sem introduzir erro de sintaxe ou lógica ao programa, e sem incorrer em prejuízo algum ao funcionamento do algoritmo.

//	E) Na linha 7, o comando poderia ter a palavra "else" retirada passando a nova inha a ser "If (tftNumero[1] < titMenor Valor) (" 
//	sem introduzir erro de sintaxe ou lógica ao programa, e sem incorrer em prejuízo algum ao funcionamento do algoritmo.

// Resposta: Alternativa D. Motivo: Se "(int i=0; i<=9; i++)" o código só irá processar a partir do segundo número.
