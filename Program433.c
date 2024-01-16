#include <stdio.h>

void Display()
{

	static int iCnt = 1;

	if(iCnt <= 4)
	{
		printf("%d",iCnt);
		iCnt++;
		Display();
	}
	return;
}

int main()
{
	Display();
	return 0;
}