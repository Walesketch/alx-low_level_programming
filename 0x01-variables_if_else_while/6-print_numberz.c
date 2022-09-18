#include <stdio.h>
/**
 * main: main block
 * description: print all the number of base 10, starting from 0.
 * you are not allowed to use any varriable of type char.
 * you can only use 'putchar' to print console.
 * you can only use 'putchar' twice.
 * return 0.
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

return (0);
}

