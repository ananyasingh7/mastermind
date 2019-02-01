#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

int correct(char* word, char* correctWord){
	for(int i = 0; i<4; ++i){
		
	}
}




int main(int argc, char* argv[]){
	printf("Available Colors: (B)lue (G)reen (O)range (P)urple (R)ed (Y)ellow\n");

    int guesses = 12;
	bool gameOver = false; 
	char codemaker[256];
	strcpy(codemaker, argv[1]);

	while(!gameOver){
		gameOver = true;
		printf("No. guesses left: %d\n",guesses + argc);
		char guess[256];
		printf("Enter your guess: ");
		scanf("%s",guess);
		
	}

	



	return 0;
}
