/**
 * _cdigits - funtion to return the digits of a number
 * Description: A function to get the number of the
 * digits.
 * @n: The number
 * Return: The digits.
 */
int _cdigits(int n)
{
	int t = 0;

	while (n != 0)
	{
		n /= 10;
		t++;
	}
	return (t);
}
