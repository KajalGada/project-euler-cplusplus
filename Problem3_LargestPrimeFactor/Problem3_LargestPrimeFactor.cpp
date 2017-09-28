#include <iostream>
#include <algorithm>

int main()
{

	long int remainderNum = 600851475143;
	//long int remainderNum = 13195;
	long int largestFactor;
	long int divisorNum = 2;
	//long remainderNum = num;

	while (divisorNum * divisorNum <= remainderNum)
	{
		if (remainderNum%divisorNum == 0 )
		{
			remainderNum = remainderNum/divisorNum;
			largestFactor = divisorNum;
		}
		else
		{
			if (divisorNum == 2)
			{
				divisorNum = divisorNum + 1;
			}
			else
			{
				divisorNum = divisorNum + 2;
			}
		}
	}

	largestFactor = std::max(largestFactor,remainderNum);

	std::cout << "Largest prime factor: " << largestFactor << std::endl;

	return 0;
}
