#include <iostream>
using namespace std;

int Factorial(int iNo)
{
	static int iCnt = 1;

	static int iFact = 1;

	if(iCnt <= iNo)
	{
		iFact = iFact * iCnt;

		iCnt++;

		Factorial(iNo);
	}

	return iFact;
}

int main()
{
	cout<<Factorial(5);

	return 0;
}