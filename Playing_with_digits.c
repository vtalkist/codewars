int digPow(int n, int p)
{
	int count = 0, sum = 0;
	for (int i = n; i > 0; count++, i/=10)
		;
	for (int i = n, digit; i > 0; )
	{
		digit = i % 10;
		sum += pow(digit, (--count + p));
		i /= 10;
	}
	return sum == n * (sum / n) ? sum/n : -1;
}
