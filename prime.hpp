#include <math.h>

bool isPrimeNumber(long number)
{
	if (number == 2)
	{
		return true;
	}
	else if (number <= 1 || number % 2 == 0)
	{
		return false;
	}
    long ceilingRoot = ceil(sqrt(number));
    for (long i = 3; i <= ceilingRoot; i += 2)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}