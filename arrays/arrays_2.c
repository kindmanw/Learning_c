#include <stdio.h>

int main()
{
	int scores[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150};

	int size = sizeof(scores)/sizeof(scores[0]);

	for (int i=0; i<size; i++)

		printf("%d \n", scores[i]);
}
