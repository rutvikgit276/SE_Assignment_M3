/*7. Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance
*/
#include<iostream>
using namespace  std;

class Company{
	protected :
		string company_name;
	public :
		Company()
		{
			cout << "\n\n\t-------------------------Enter Details---------------------------------------";
			cout << "\n\n\tEnter the Company's Name   : ";
			cin >> company_name;
		}
};
class Car:public Company
{
	protected :
		string car_name;
		int car_year;
	public :
		Car()
		{
			cout << "\n\n\tEnter the Name of the Car    : ";
			cin >> car_name;
			cout << "\n\n\tEnter the Year               : ";
			cin >> car_year;
		}
};

class Insurance:public Car
{
	int issue_year, valid_year;
	public :
		Insurance()
		{
			cout << "\n\n\tEnter Insurance Issue Year   : ";
			cin >> issue_year;
			cout << "\n\n\tUpto                   : ";
			cin >> valid_year;
			
		}
		void print_details();
};
void Insurance::print_details()
{
	        cout << "\n\n\t-----------------------------------Display Details-----------------------------------";
	        cout << "\n\n\tEnter the Company's Name   : "<< company_name;
			cout << "\n\n\tEnter the Name of the Car    : "<<car_name;
			cout << "\n\n\tEnter the Year               : "<< car_year;
			cout << "\n\n\tEnter Insurance Issue Year   : "<< issue_year;
			cout << "\n\n\tUpto                   : "<< valid_year;
}

main()
{
	Insurance I;
	I.print_details();
}
