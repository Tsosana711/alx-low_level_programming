/**
 * print_last_digit - It prints the last digit of any number
 * Return: The last digit
 * @n: is the given digit
 */
int print_last_digit(int n)
{
int a;

if (n < 0)
n = -n;

a = n % 10;

if (a < 0)
a = -a;

return (a);
}
