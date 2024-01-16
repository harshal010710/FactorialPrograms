#include <iostream>
using namespace std;

int Factorial(int iNo)
{
	if(iNo < 1)
	{
		return 1;
	}
	
	return iNo * Factorial((iNo-1));
}

int main()
{
	cout<<Factorial(5);

	return 0;
}