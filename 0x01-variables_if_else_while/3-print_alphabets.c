#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
*/
int main(void)
{
	char sm_letter = 'a';
	char lg_letter = 'A';

	for (; lg_letter <= 'Z'; lg_letter++)
	{
		for (; sm_letter <= 'z'; sm_letter++)
			putchar(sm_letter);
		putchar(lg_letter);
		if (lg_letter == 'Z')
			putchar('\n');
	}
	return (0);
}
