/*
6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor
*/
#include<iostream>
using namespace std;

class Employee
{
	private :
		string Emp_name;
		int Emp_id;
		int Emp_sal;
		int per;
	
	public :
		Employee()
		{
			Emp_sal = 35000;
		}
		
		void get_value()
		{
			cout <<"\n\n\t----------------Enter the Details-------------------------------";
			cout << "\n\n\tEnter the Employee's Name          : ";
			cin >> Emp_name;
			cout << "\n\n\tEnter Employee ID                  : ";
			cin >> Emp_id;
			cout << "\n\n\tHow many Hours they work           : ";
			cin >> per;
		}
		
		void print_value()
		{
			int sal;
			cout <<"\n\n\t----------------Display the Details-------------------------------";
			cout << "\n\n\tEnter the Employee's Name          : "<< Emp_name;
			cout << "\n\n\tEnter Employee ID                  : "<< Emp_id;
			cout << "\n\n\tHow many Hours they Works          : "<< per;
			if(per >= 12)
			{
				cout << "\n\n\t------------Salary Increase 5 %----------------";
				sal=Emp_sal * 0.05;
				cout << "\n\n\tBonus                        : "<< sal;
				cout << "\n\n\tSalary of Employee is        : "<< Emp_sal+sal;
			}
			else if(per >= 10 && per < 12)
			{
				cout << "\n\n\t-----------Salary Increase 2%----------------";
				sal=Emp_sal * 0.02;
				cout << "\n\n\tBonus                        : "<< sal;
				cout << "\n\n\tSalary of Employee is        : "<< Emp_sal+sal;
			}
			else
				cout << "\n\n\tSalary of Employee is        : "<< Emp_sal;
		}
};

main()
{
	Employee E;
	E.get_value();
	E.print_value();
}
