//NUMBER GUESSING GAME

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// function that generates a number in the range 1-100 and guesses whether the input is same or not
void guess(int N)
{
	int num, guess, numofguess = 0;

	
	num = rand() % N;// generate a random number

	printf("Guess a number between 1 and %d\n",
		N);

	// loop to guess till user gets right number
	do {

		if (numofguess > 9) {
			printf("\nYou Loose!\n");
			break;
		}

		
		scanf("%d", &guess);//input

		//to check and display whether the guessed number is higher, lower or same as the random number 
		if (guess > num)

		{
			printf("Guess a lower number please!\n");
			numofguess++;
		}

	
		else if (num > guess)

		{
			printf("Guess a higher number please!\n");
			numofguess++;
		}

		
		else
			printf("You guessed the number in %d attempts!\n",numofguess);

	} while (guess != num);
}


int main()//main function 
{
	int N = 100;

	// Function call
	guess(N);

	return 0;
}
