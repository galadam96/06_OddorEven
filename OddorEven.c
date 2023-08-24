/*Date: 2023.06.04
Purpose: Determine if a number is even or odd*/

#include <stdio.h>

int main()
{
	int number;
	printf("Please enter a number to see if it is odd or even!\n");
	scanf_s("%d", &number);

	if (number % 2 == 0)
	{
		printf("The number is even.");
	}
	else 
	{
		printf("The number is odd");
	}
	return 0;

	 // (number % 2 == 0) ? printf("The number is even.") : printf("The number is odd"); // short version
}