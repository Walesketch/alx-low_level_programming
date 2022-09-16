#include <stdio.h>
/**
 * main: main block
 * description: Use `putchar` to print lowercase andthen uppercase alphabet.
 * Return: 0
 */
int main(void)
{
char c = 'a';
while(c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

