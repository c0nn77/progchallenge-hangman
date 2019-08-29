#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DECLARATIONS 
void generate_banner(void);
char player_keyword[10];
char turn_char;
void setup_keyword(void);
void build_hang_env(void);
void prompt_userchar(void);
void compare_chars(char choice, char key[]);

// MAIN
int main(void) {
	
	generate_banner();
	setup_keyword();
	build_hang_env();
	prompt_userchar();
  compare_chars(turn_char, player_keyword);		

}

// FUNCTIONS

// Create the Start Menu Banner
void generate_banner(void) {
	system("clear");
	
	for (int i = 0; i < 35; i++) {
		printf("#");
	}	
	printf("\n");
	printf("Programming Challenge 1 - Hangman\n");
	printf("(Developed by c0nn)\n");	
	for (int i = 0; i < 35; i++) {
		printf("#");
	}
	printf("\n");
}

// Prompt the user for the keyword and put it in a variable
void setup_keyword(void) {
	printf("Enter a keyword (max. 10 chars): ");
	scanf("%10s", player_keyword);
	printf("Keyword: %s\n", player_keyword); 
}

// Create the hang interface
void build_hang_env(void) {

	generate_banner();

	int key_length = strlen(player_keyword);
	printf("%i\n", key_length);
	for (int i = 0; i < key_length; i++) {
		printf("_ ");
	}
	printf("\n");

}

// Prompt the user for the char
void prompt_userchar(void) {

	printf("Enter the char: ");
	scanf("%c\n",  &turn_char);

}

// Comparing the user char with the keyword
void compare_chars(char choice, char key[]) {
	
	printf("User choice: %c\n", choice);

	for (int i = 0; i < strlen(key); i++) {
		if (choice != key[i]){
			printf("different\n");
		} else {
			printf("equal\n");
		}
	}		
}

// Handle the success or failure of the user choice

// Reset the round or finish the game
