/**
 * swap_int -  function that swaps the values of two integers.
 * @a: pointer to int 1
 * @b: pointer to int 2
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
