#include <unistd.h>

/**
* print_alphabet - Check description
* Description: It prints the alphabet in lowercase fallowed by a new line
* Return: Nothing.
*/
void print_alphabet(void)
{
char alp = 'a';
while (alp <= 'z')
{
_putchar (alp);
alp++;
}
_putchar ('\n');
}
