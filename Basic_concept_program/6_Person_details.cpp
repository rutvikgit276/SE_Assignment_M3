/*
6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/
#include<iostream>
using namespace std;

class Person
{
	private :
		string person_name;
		int age;
		string country;
	
	public :
		void get_value();
		void print_value();
};

void Person::get_value()
{
	cout << "\n\n\t-----------------Enter Your Details-----------------------";
	cout << "\n\n\tEnter Your Name               : ";
	cin >> person_name;
	cout << "\n\n\tEnter Your Age                : ";
	cin >> age;
	cout << "\n\n\tEnter Your Country            : ";
	cin >> country;
}

void Person::print_value()
{
	cout << "\n\n\t-----------------Display Your Details-----------------------";
	cout << "\n\n\tEnter Your Name               : "<< person_name;
	cout << "\n\n\tEnter Your Age                : "<< age;
	cout << "\n\n\tEnter Your Country            : "<< country;
}

main()
{
	Person P;
	P.get_value();
	P.print_value();
}
