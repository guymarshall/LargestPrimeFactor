#include <math.h>

bool isPrimeNumber(int number)
{
	if (number == 2)
	{
		return true;
	}
	else if (number <= 1 || number % 2 == 0)
	{
		return false;
	}
    int ceilingRoot = ceil(sqrt(number));
    for (int i = 3; i <= ceilingRoot; i += 2)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}