#include <stdio.h>
/**
* main - Check description
* Description: It prints the word _putchar, followed by a new line.
* Return: 0.
*/
int main(void)
{
char str[] = "_putchar";
int x;
int strLen = sizeof str;
for(x=0;x<strLen;x++)
{
putchar(str[x]);
}
putchar('\n');
return (0);
}
