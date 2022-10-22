# include <stdio.h>
#pragma warning(disable: 4996)
/*Filename: mp2.cpp
  Project: Major Assignment 2
  By: Elijah Atta-Konadu
  Student Id: 8722660
  Description: Write a program that calculates powers using a function that you create*/
int getNum(void)
{
	/* we will see in a later lecture how we can improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: indent and brace this function consistent with
	your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}

int base(void) {
	int base = getNum();
	printf("d%\n: Enter a number that falls between the 1-25 range ",base);
	if (base > 0) {
		main();
	}
	return base;
}
int exponent(void) {
	int exponent = getNum();
	printf("d%\n: Enter a number that falls between the 1-5 range", exponent);
	if (exponent > 0) {
		main();
	}
	return exponent;
}
int calculations(void) {
	int b = base();
	int e = exponent();
	int sum = 1;
	for (int i = 0; i <= b + 1; i++) {
		sum = e * e;
		sum = sum * e;

	}
	printf(" d%\n:",base," to the power of ",exponent," is ",sum);
	main();
	return sum;

}
//Add menu to the game 
int main(void) {
	int option = getNum();
	char menu = "d%\n: Power Menu:\n	1.Change base\n	2.Change exponent\n 3.Display base raised to exponent\n 4.Exit program\nOption? ";
	printf(menu,option);
	if (option < 1 || option > 4) {
		printf("You have inputed an invald option");
		printf("d%\n: Power Menu:\n	1.Change base\n	2.Change exponent\n 3.Display base raised to exponent\n 4.Exit program\nOption? ", option);
		if (option == 1) {
			base();
		}
		if (option == 2) {
			exponent;
		}
	}
	return 4;
}