/*
3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/
#include<iostream>
using namespace std;

class Car
{
	private :
		string company_name;
		string model_name;
		int year;
		
	public :
		void get_value()
		{
			cout << "\n\n\t---------------------Enter Details-----------------------------";
			cout << "\n\n\tEnter the Company Name                   : ";
			cin >> company_name;
			
			cout << "\n\n\tEnter the Model Name                     : ";
			cin >> model_name;
			
			cout << "\n\n\tEnter the Model year                     : ";
			cin >> year;
		}
		
		void print_value()
		{
			cout << "\n\n\t---------------------Display Details-----------------------------";
			cout << "\n\n\tEnter the Company Name                   : "<<company_name;
			
			cout << "\n\n\tEnter the Model Name                     : "<< model_name;
			
			cout << "\n\n\tEnter the Model year                     : "<< year;
		}
};

main()
{
	Car C;
	C.get_value();
	C.print_value();
	
}
