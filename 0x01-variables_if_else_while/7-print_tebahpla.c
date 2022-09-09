#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
 */
int main(void)
{
	char letter = 'z';

	for (; letter >= 'a'; letter--)
	{
		putchar(letter);
		if (letter == 'a')
			putchar('\n');
	}
	return (0);
}
