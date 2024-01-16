#include <iostream>
using namespace std;

void DisplayDigits(int iNo)
{
	if(iNo != 0)
	{
		cout<<iNo % 10;

		DisplayDigits(iNo / 10);
	}
}

int main()
{
	DisplayDigits(20466);

	return 0;
}