#include <stdio.h>

/**
  *main - entry point
  *program prints 1 to 100 followed by a new line
  *multiples of 3 print Fizz
  *multiples of five print Buzz
  *multiples of both print FizzBuzz
  *Return: success
  */

int main(void)
{
	int i = 1;

	for (; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
