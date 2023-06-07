#include <stdio.h>

int main()
{
	int scores[10] = {13, 11, 88, 90, 66, 22, 10, 7, 70,25};

	for(int i = 0; i<10; i++)
		printf("%d \n", scores[i]);
	scanf("%d", &scores);
}
