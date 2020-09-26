#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[]) {

	int i;

	if(argc == 3)
	{
		printf("My name is %s %s.\n", argv[1], argv[2]);
		printf("Name printed 10 times:\n");

		for(i = 0; i < 10; i++)
		{
			printf("%s %s\n", argv[1], argv[2]);
		}
	}
	else
	{
		printf("Name has to be 2 words exactly.\n");
		return 0;
	}

	char* firstName = argv[1];
	char* lastName = argv[2];

	int count1 = 0;
	for(i = 0; firstName[i] != '\0'; i++)
	{
		count1++;
	}
	//printf("There %d characters in your first name.\n", count1);

	int count2 = 0;
	for(i = 0; lastName[i] != '\0'; i++)
	{
		count2++;
	}
	//printf("There %d characters in your last name.\n", count2);

	if(count1 > count2)
	{
		printf("My first name is bigger than my last name.\n");
	}
	else if(count1 < count2)
	{
		printf("My last name is bigger than my first name.\n");
	}
	else
	{
		printf("My first and last name have the same number of characters.\n");
	}

return 0;
}