// try to convert it to pure binary (yes or no)
# include <stdio.h>
# include <stdlib.h>
# include <math.h>   
#include <time.h>

int main(void)
{
    srand(time(NULL));
	int low = 1;
	int high;
    printf("Enter upper limit : ");
    scanf("%d", &high);
	int guess = high + low - 1;
	int user_guess;
	int playerAnswer;


	printf("Choose a number from %d to %d.\n", low, high);

			do{
				guess = high + low - 1;
				user_guess = (int) ceil(guess / 2.0);

				printf("Is your number %d ?\n",user_guess );
				printf("1(Yes). 2(Guess Lower). 3(Guess higher) :\n");
                scanf("%d", &playerAnswer);

				if(playerAnswer == 3){
					low = user_guess + 1;}
				if(playerAnswer == 2){ 
					high = user_guess - 1;}
				if (playerAnswer == 1){
                    printf("Found it! \n");
				    break;}
				    


			}while(playerAnswer != 1);

}


