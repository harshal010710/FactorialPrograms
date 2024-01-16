#include <iostream>
using namespace std;

void Factors(int iNo)
{
	static int iCnt = 1;
	
	if((iCnt <= (iNo / 2)))
	{
	if((iNo % iCnt) == 0)
	{
		cout<<iCnt<<endl;
		
		
	}
	iCnt++;
	Factors(iNo);

	}
}

int main()
{
	Factors(12);

	return 0;
}