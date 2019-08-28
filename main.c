#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DECLARATIONS 
char player_keyword[10];
void start_menu(void);
void setup_keyword(void);
void compare_chars(char choice, char key[]);

// MAIN
int main(void) {
	
	start_menu();
	setup_keyword();
  compare_chars('c', player_keyword);		

}

// FUNCTIONS

// Create the Start Menu Template
void start_menu(void) {
	system("clear");
	
	for(int i = 0; i < 35; i++) {
		printf("#");
	}	
	printf("\n");
	printf("Programming Challenge 1 - Hangman\n");
	printf("(Developed by c0nn)\n");	
	for(int i = 0; i < 35; i++) {
		printf("#");
	}
	printf("\n");
}

// Prompt the user for the keyword and put it in a variable
void setup_keyword(void) {
	printf("Enter a keyword (max. 10 chars):");
	scanf("%10s", player_keyword);
	printf("Keyword: %s\n", player_keyword); 
}

// Create the hang interface and prompt the user for the char

// Comparing the user char with the keyword
void compare_chars(char choice, char key[]) {
	
	printf("User choice: %c\n", choice);
	printf("Keyword: %s\n", key);

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
