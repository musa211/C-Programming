#include <stdio.h>

int main(int argc, char* argv[]) {
	
	int i;
	
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
	}
	printf("%d\n", argc);
}
