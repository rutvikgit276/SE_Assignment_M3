/*6. Write a C++ Program to show access to Private Public and Protected using
Inheritance*/
#include<iostream>
using namespace std;

class Super 
{
	protected :
		string name;
		
	public :
		Super()
		{
	        cout << "\n\n\tEnter Name of the Person      : ";
	        cin >> name;
	    }
};

class Subclass : protected Super
{
	protected :
		int age;
	public :
		void get_age()
		{
			cout << "\n\n\tEnter the Age of the Person  : ";
			cin >> age;
		}
		
};

class Derived :private Subclass
{
	private :
		string city;
	public :
		void get_derived()
		{
			get_age();
			cout << "\n\n\tEnter the City Name         : ";
			cin >> city;
		}
		void print_Der()
	    {
	    	cout << "\n\n\tName of the Person             : "<<name;
	    	cout << "\n\n\tAge of the Person              : "<<age;
	    	cout << "\n\n\tCity of the Person             : "<<city;
		}
};

main()
{
	Derived D;
	D.get_derived();
	D.print_Der();
}

