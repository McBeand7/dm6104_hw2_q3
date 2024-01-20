/*Suppose John and Bill worked for some time and we want to calculate the total time both of them worked.
Write a program that reads number of days, hous, minutes each of them worked, and prints the total time both
of them worked together as days, hours, minutes.*/

#include<iostream>
using namespace std;

const int HOURS_IN_A_DAY = 24, MINUTES_IN_AN_HOUR = 60;
int main()
{
	int days_John_worked, hours_John_worked, minutes_John_worked, days_Bill_worked, hours_Bill_worked, minutes_Bill_worked;

	cout << "Please enter the number of days John has worked:";
	cin >> days_John_worked;
	cout << "Please enter the number of hours John has worked:";
	cin >> hours_John_worked;
	cout << "Please enter the number of minutes John has worked:";
	cin >> minutes_John_worked;
	
	cout << "\n";

	cout << "Please enter the number of days Bill has worked:";
	cin >> days_Bill_worked;
	cout << "Please enter the number of hours Bill has worked:";
	cin >> hours_Bill_worked;
	cout << "Please enter the number of minutes Bill has worked:";
	cin >> minutes_Bill_worked;

	cout << "\n";

	cout << "The total time both of them worked together is: 6 days,3 hours and 35 minutes.";
	return 0;
}
