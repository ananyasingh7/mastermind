#include<stdio.h>
#include<stdlib.h>

#include<string.h>

typedef int bool; 
#define true 1
#define false 0 


int main(int argc, char* argv[]){
	printf("Available Colors: (B)lue (G)reen (O)range (P)urple (R)ed (Y)ellow\n");

    int guesses = 12;
    int counter = 0;
	bool gameOver = false; 
    char codemaker[256];
	strcpy(codemaker, argv[1]);
    printf("%s\n",codemaker);
    
    
    if (argc>4){
        printf("This is just wrong");
        printf("%s\n",codemaker);
        printf("%d",counter);
    }

	while(!gameOver){
		
        gameOver = true;
		printf("No. guesses left: %d\n",guesses);
		char guess[256];
		printf("Enter your guess: ");
		scanf("%s",guess);
        
        int comp = strcmp(codemaker,guess);
        if(comp == 0){
            printf("Feedback: %d, %d\n",4,0);
        }
        
		
	}

	



	return 0;
}
