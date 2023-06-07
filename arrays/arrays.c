#include <stdio.h>

int main()
{
	//int singles[] = {9, 12,90, 77};

	//printf("%d\n", singles[1]);

	char names[][8] = {"Bright", "Ntem", "Fred", "Emmy", "Ngozi", "Williams"};
	//printf( "%s\n %s\n %s\n %s\n", names[0], names[5], names[2], names[3]);
	
	int index = 5;

	while (index <= 0)
	{
		printf("%s\n", names[index]);
		index = index + 1;
	}

	return 0;
}
