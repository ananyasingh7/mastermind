#include<stdio.h>
#include<stdlib.h>

#include<string.h>

typedef int bool; 
#define true 1
#define false 0 


int main(int argc, char* argv[]){
	printf("Available Colors: (B)lue (G)reen (O)range (P)urple (R)ed (Y)ellow\n\n");
    int guesses = 12;
    int w = 0;
    int b = 0;
	bool gameOver = false; 
    char codemaker[256];
	strcpy(codemaker, argv[1]);
    char correct[256];
    strcpy(correct, codemaker);

    
    
    if (argc>4){
        printf("This is just wrong");
        printf("%s\n",codemaker);
    }

	while(!gameOver && guesses != 0){
        b = 0;
        printf("No. guesses left: %d\n", guesses);
		char guess[256];
		printf("Enter your guess: ");
		scanf("%s",guess);
        
        int comp = strcmp(codemaker,guess);
        if(comp == 0){
            printf("Feedback: %d, %d\n",4,0);
            printf("YOU WIN!\n");
            gameOver = true;
            guesses = 0;
            break;
        }
        guesses--;
        int i;
        for(i=0; i<4; ++i){
            if(codemaker[i] == guess[i]){
                b++;
                codemaker[i] = '*';
            } 
        }
        printf("%s\n", correct);
        printf("%s\n", codemaker);
    
        int Blue, Green, Orange, Purple, Red, Yellow;
        Blue = Green = Orange = Purple = Red = Yellow = 0;
        int k;
        int q;
        for(k=0; k<4; ++k){
            for(q = 0; q<4; ++q){
                if(codemaker[k] == guess[q]){
                    if(codemaker[k] == 'B'){
                        Blue += 1;
                        codemaker[k] = '*';
                    }else if(codemaker[k] == 'G'){
                        Green += 1;
                        codemaker[k] = '*';
                    }else if(codemaker[k] == 'P'){
                        Purple += 1;
                        codemaker[k] = '*';
                    }else if(codemaker[k] == 'R'){
                        Red += 1;
                        codemaker[k] = '*';
                    }else if(codemaker[k] == 'O'){
                        Orange += 1;
                        codemaker[k] = '*';
                    }else if(codemaker[k] == 'Y'){
                        Yellow += 1;
                        codemaker[k] = '*';
                    }
                }
            }
        }

        w = Blue + Green + Orange + Purple + Red + Yellow;
        
        printf("Feedback: %d, %d\n\n",b,w);

        strcpy(codemaker, correct);
        
        if(guesses == 0){
            gameOver = true;
        }
	    
    }
    return 0;   
}
