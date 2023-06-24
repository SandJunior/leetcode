#include <stdio.h>

int main()
{

	int n;

	printf("Insira um numero de falas: "); // OBS: sempre insira uma a mais que o desejado
	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FIZZBUZZ\n");

		else if ((i % 3) == 0)
			printf("Fizz\n");

		else if ((i % 5) == 0)
			printf("Buzz\n");

		else
			printf("%d\n", i);
	}

	return 0;
}
