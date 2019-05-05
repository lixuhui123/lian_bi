#include "stdio.h"
int main()
{
	int year = 1000;
	while (year++ <= 2000)
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
			printf("%d\n", year);

	}
	system("pause");
	return 0;
}