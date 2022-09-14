#include "main.h"
/**
 * main -  prints _putchar, followed by a new line.
 *
 * Return: Always 0.
 */
int main(viod)
{
	char task[9] = "_putchar";
	int i;

	i=0;
	while (i<8)
	{
		_putchar(task[i]);
		i++;
	}

	_putchar('\n);
	return(0);
}
