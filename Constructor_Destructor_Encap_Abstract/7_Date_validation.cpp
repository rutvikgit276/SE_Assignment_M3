/*
7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.
*/
#include<iostream>
using namespace std;

class Date
{
	private :
		int day;
		int month;
		int year;
	
	public :
		Date()
		{
			cout << "\n\n\tEnter the Day                     : ";
			cin >> day;
			cout << "\n\n\tEnter the Month                     : ";
			cin >> month;
			cout << "\n\n\tEnter the year                     : ";
			cin >> year;
		}
		void print()
		{
			cout << "\n\n\tEnter the Day                     : "<< day;
			cout << "\n\n\tEnter the Month                     : "<< month;
			cout << "\n\n\tEnter the year                     : "<< year;
			if(day <= 31)
			{
				if(month == 2)
				{
					if(year %4 == 0)
					{
						if(day <= 29)
						{
							cout << "\n\n\tDate is Validate";
						}
						else
						{
							cout << "\n\n\tDate is not Validate";
						}
					}
					else
					{
						if(day <= 28)
						{
							cout << "\n\n\tDate is Validate";
						}
						else
						{
							cout << "\n\n\tDate is not Validate";
						}
					}
				}
				
				else if(month <= 12)
				{
					cout << "\n\n\tDate is Validate";
				}
				else 
				{
					cout << "\n\n\tDate is not Validate";
				}
			}
		}
};

main()
{
	Date D;
	D.print();
}


