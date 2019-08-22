#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {

	printf("Programming Challenge 1 - Hangman\n");

	// Valores de teste
	char *keyword  = "tyler";
	char *c = "e";

	printf("Chosen char:'%s'. \n", c);

	// Função para pedir e guardar a palavra escolhida pelo usuário
		


	// Ambiente da forca com o número de espaços correspondentes ao da palavra
	

	// Função que determina o fim do jogo, e se o jogador venceu ou não

}

// Comparing the user char with the keyword
bool compare_chars(char a, char *b) {
		
		int n = strlen(b);
		for (int i = 0; i < n; i++) {
		
			if(a != b[i]) {
			
				return 0;
	
			}
		} 

}
