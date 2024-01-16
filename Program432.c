#include <stdio.h>

void DisplayR(int i)
{
	// static int i = 0;

	if(i == 4)
	{
		return;
	}

	printf("Jay Ganesh....!\n");
	DisplayR(i + 1);
}

int main()
{
	// DisplayI();

	DisplayR(0);

	return 0;
}