//Scenario
//Write a program which takes two values : a count of the days in one week and the value of Pi.Next, print these two values.Don't forget about data types.
//Your version of the program must print the same result as the expected output.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Sample Input
//7
//3.14
//
//Sample Output
//How many days in the week : 7
//The value of Pi to two points : 3.14
//There are 7 days in the week.
//Pi value is 3.140000.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main() {
	int daysW;
	float p;
	printf("How many days in the week:  ");
	scanf_s("%d",&daysW);
	printf("The value of Pi to two points: ");
	scanf_s("%f",&p);
	printf("There are %d days in the week\n",daysW);
	printf("Pi value is %f", p);
	return 0;
}