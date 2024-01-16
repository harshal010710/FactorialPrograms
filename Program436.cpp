#include <iostream>
using namespace std;

int Factors(int iNo)
{
	static int iCnt = 1;
	static int iSum = 0;

	if (iCnt <= (iNo / 2))
	{
		if ((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
		iCnt++;
		Factors(iNo);
	}

	return iSum;
}

int main()
{
	cout << Factors(20);

	return 0;
}