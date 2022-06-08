#include <unistd.h>

/**
* print_alphabet - Check description
* Description: It prints the alphabet in lowercase fallowed by a new line
* Return: Nothing.
*/
void print_alphabet(void)
{
char alph;
alph = 'a';
while (alph <= 'z')
{
_putchar(alph);
alph++;
}
_putchar('\n');
return (0);
}
