#include "test.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int val1, val2;
	int test;
	char *com;
	printf("Please enter command (\"min\" or \"max\"): ");
	scanf("%s", com);
	if(com[0] == 'm' && com[1] == 'a' && com[2] == 'x')
		test = 1;
	else if (com[0] == 'm' && com[1] == 'i' && com[2] == 'n')
		test = 0;
	else
	{
		printf("Error! Incorrect input!\n");
		exit(0);
	}
	printf("Please enter value 1: ");
	scanf("%d", &val1);
	printf("Please enter value 2: ");
	scanf("%d", &val2);
	if(test == 1)
		printf("Maximum value: %d\n", max(val1, val2));
	else
		printf("Minimum value: %d\n", min(val1, val2));
	return 0;
}

