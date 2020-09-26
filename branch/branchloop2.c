#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char* argv[]) {

	int i;

	if(argc < 4)
	{
		printf("Not enough arguments. Name must be 2 words follow by a number.\n");
		return 0;
	}
	if(argc > 4)
	{
		printf("Too many arguments. Name must be 2 words follow by a number.\n");
		return 0;
	}
	
	
	char* firstName = argv[1];
	char* lastName = argv[2];
	char* number = argv[3];

	for(i = 0; i < strlen(firstName); i++)
	{
		if(!isalpha(firstName[i]))
		{
			printf("All characters in your name must be a letter.\n");
			return 0;
		}
	}

	for(i = 0; i < strlen(lastName); i++)
	{
		if(isalpha(lastName[i]))
		{

		}
		else
		{
			printf("All characters in your name must be a letter.\n");
			return 0;
		}
	}


	if(argc == 4)
	{	
		if(isdigit(number[0]) && (number[0] != '0'))
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
			printf("Must include positive number after name.\n");
			return 0;
		}
	}
	else 
	{
		printf("Name has to be 2 words exactly followed by a number.\n");
		return 0;
	}


	int count1 = 0;						// counting first name
	for(i = 0; firstName[i] != '\0'; i++)
	{
		count1++;
	}

	int count2 = 0;						// counting last name
	for(i = 0; lastName[i] != '\0'; i++)
	{
		count2++;
	}

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
	
	int index = atoi(argv[3]);

	if(index > count1 + count2)
	{
		printf("Error. Number is larger than your full name.\n");
		return 0;
	}
	

	char name1[10];
	char name2[10];

	for(i = 0; i < count1; i++)
	{
		if(firstName[i] < 97)
		{
			name1[i] = firstName[i];
		}
		else
		{
			name1[i] = firstName[i] -32;
		}
	}

	for(i = 0; i < strlen(lastName); i++)
	{
		if(lastName[i] < 97)
		{
			name2[i] = lastName[i];
		}
		else
		{
			name2[i] = lastName[i] - 32;
		}	
	}
	
	if(index > count1)	// last name
	{
		i = index - count1 - 1;
		printf("%s %s %d %c\n", name1, name2, index, lastName[i]);
	}
	else				// first name
	{
		i = index - 1;
		printf("%s %s %d %c\n", name1, name2, index, firstName[i]);
	}
	
return 0;
}