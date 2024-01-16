#include <iostream>
using namespace std;

int SumDigits(int iNo)
{
	static int iSum = 0;

	if(iNo != 0)
	{
		iSum = iSum + (iNo % 10);

		SumDigits(iNo / 10);
	}

	return iSum;
}

int main()
{
	cout<<SumDigits(20466);

	return 0;
}