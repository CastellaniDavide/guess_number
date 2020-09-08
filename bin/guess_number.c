/**
 * @file guess_number.cpp
 *
 * @version 01.01 2020-08-15
 *
 * @brief Guess number c
 *
 * @ingroup guess_number
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL)); // Setup random

	int correct = rand() % 1000;
	int possibilities = 10;
	int choosed = -1;

	while (possibilities > 0 && correct != choosed)
	{
		printf("Insert a number: ");
		scanf("%d", &choosed);
		if (correct == choosed)
		{
			printf("Correct!\n");
			return 0;
		}
		else
		{
			if(choosed > correct)
				puts("Too hight\n");
			else
				puts("Too low\n");
		}
		possibilities--;
	}

	printf("The number was %d\n", correct);

	return 0;
}