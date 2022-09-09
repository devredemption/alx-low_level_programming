#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on Success
*/
int main(void)
{
	int ascii = 48;

	for (; ascii < 58; ascii++)
	{
		putchar(ascii);
	}
	putchar('\n');
	return (0);
}
