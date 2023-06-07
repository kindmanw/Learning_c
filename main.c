#include <stdio.h>

int main()
{
	int num = 0;
	printf("Enter a number:\n");
	scanf("%d", &num);

	int i=1;

	while (i<=num)
	{
		if(i%2==0)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}
