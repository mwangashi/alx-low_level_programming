#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.c"
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */

	int i;

	srand(time(0));
	
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
return (0);

