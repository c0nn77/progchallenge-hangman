#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// DECLARATIONS
char *keyword;
char *user_char;
char *test_char;
void start_menu(void);
bool compare_chars(char *a, char *b);

// MAIN
int main(void) {

	keyword = "tyler";
	user_char = "e";
	test_char = "d";

	start_menu();
	compare_chars(user_char, test_char);		

}

// FUNCTIONS

// Create the Start Menu of the game

  void start_menu(void) {

	printf("Programming Challenge 1 - Hangman\n");
	printf("Chosen char: '%s'.\n", user_char);
	printf("Chosen keyword: '%s'.\n", keyword);	

}

// Prompt the user for the keyword and put it in a variable

// Create the hang interface and prompt the user for the char

// Compare the chosen char with the chars in the keyword

// Handle the success or failure of the choice

// Reset the round or finish the game


// Comparing the user char with the keyword
bool compare_chars(char *a, char *b) {

	if(a != b) {
		printf("They are different\n");
	}

}
