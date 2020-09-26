#include <stdio.h>

int main(int argc, char* argv[]) {
	
	int i;
	int num = argc;
	
	if(argc == 1)
	{
		printf("Where is your name?\n");
		printf("Please put a valid name!\n");
	}
	else if(argc > 4)
	{
		printf("Error, your name is too long.\n");
		printf("Maximum name length is three.\n");
	}
	else
	{
		for(i = 1; i < argc; i++)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");	

		printf("Enter your favorite color among red, blue, green, yellow.\n");

		char favColor[10];
		scanf("%s", favColor);

		if ((favColor[0] == 'r' || 'R') &&
			(favColor[1] == 'e' || 'E') &&
			(favColor[2] == 'd' || 'D')) 
		{
			if(num - 1 == 1)
			{
				printf("My name is %s and my favorite color is %s.\n", argv[1], favColor);
			}
			else if(num - 1 == 2)
			{
				printf("My name is %s %s and my favorite color is %s.\n", argv[1], argv[2], favColor);
			}
			else
			{
				printf("My name is %s %s %s and my favorite color is %s.\n", argv[1], argv[2], argv[3], favColor);
			}
		}
		else if((favColor[0] == 'b' || 'B') &&
				(favColor[1] == 'l' || 'L') &&
				(favColor[2] == 'u' || 'U') &&
				(favColor[3] == 'e' || 'E'))
		{
			if(num - 1 == 1)
			{
				printf("My name is %s and my favorite color is %s.\n", argv[1], favColor);
			}
			else if(num - 1 == 2)
			{
				printf("My name is %s %s and my favorite color is %s.\n", argv[1], argv[2], favColor);
			}
			else
			{
				printf("My name is %s %s %s and my favorite color is %s.\n", argv[1], argv[2], argv[3], favColor);
			}
		}
		else if((favColor[0] == 'g' || 'G') &&
				(favColor[1] == 'r' || 'R') &&
				(favColor[2] == 'e' || 'E') &&
				(favColor[3] == 'e' || 'E') &&
				(favColor[4] == 'n' || 'N')) 
		{
			if(num - 1 == 1)
			{
				printf("My name is %s and my favorite color is %s.\n", argv[1], favColor);
			}
			else if(num - 1 == 2)
			{
				printf("My name is %s %s and my favorite color is %s.\n", argv[1], argv[2], favColor);
			}
			else
			{
				printf("My name is %s %s %s and my favorite color is %s.\n", argv[1], argv[2], argv[3], favColor);
			}
		}
		else if((favColor[0] == 'y' || 'Y') &&
				(favColor[1] == 'e' || 'E') &&
				(favColor[2] == 'l' || 'L') &&
				(favColor[3] == 'l' || 'L') &&
				(favColor[4] == 'o' || 'O') &&
				(favColor[5] == 'w' || 'W')) 
		{
			if(num - 1 == 1)
			{
				printf("My name is %s and my favorite color is %s.\n", argv[1], favColor);
			}
			else if(num - 1 == 2)
			{
				printf("My name is %s %s and my favorite color is %s.\n", argv[1], argv[2], favColor);
			}
			else
			{
				printf("My name is %s %s %s and my favorite color is %s.\n", argv[1], argv[2], argv[3], favColor);
			}
		}
		else {
			printf("Wrong color goodbye!!\n");
		}

	}
}