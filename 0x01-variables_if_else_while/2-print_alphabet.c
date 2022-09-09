#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	char letter = 'a'; 

	for (; letter <= 'z'; letter++)
	{
		if (letter == 'z')
		{
			putchar(letter);
			putchar('\n');
		}
		else
			putchar(letter);
	}
	return (0);
}
