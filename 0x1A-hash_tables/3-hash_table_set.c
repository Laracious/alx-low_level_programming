#include <stdio.h>
/**
 * main - coment
 * Return: value 0
 */
int main(void)
{
char c = 'a';
char u = 'A';
int cont, d;
cont = 0;
d = 0;
while (cont != 26)
{
putchar (c);
c++;
cont++;
}
while (d != 26)
{
putchar (u);
u++;
d++;
}
putchar ('\n');
return (0);
}
