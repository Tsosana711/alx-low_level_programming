/**
 * swap_int -  function that swaps the values of two integers.
 * @a: pointer to int 1
 * @b: pointer to int 2
 * @s: stores the value of int 1
 * @z: stores the value of int 2
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	int z = *b;
	*a = z;
	*b = s;
}
