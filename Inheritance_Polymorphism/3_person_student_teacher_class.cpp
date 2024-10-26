/*
3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/
#include<iostream>
using namespace std;
class Person{
	protected :
		string name;
		int age;
		string ch;
	public :
		void get_person()
		{
			cout << "\n\n\tEnter the Person's Name    : ";
			cin >> name;
			cout << "\n\n\tEnter the Age              : ";
			cin >> age;
		}
		void person_details(string character)
		{
			ch=character;
			cout << "\n\n\tPerson's Name    : "<< name;
			cout << "\n\n\tAge              : "<< age;
			cout << "\n\n\tRole of the Person (Student/Teacher)  : "<< ch;
		}
		
};

class Student:public Person
{
	private :
		int s[5];
		int total;
		int per;
	public :
		void mark();
		void display_stud();
};


void Student::mark()
{
	total=0;
	for(int i=0;i<5;i++)
	{
		cout << "\n\n\tEnter Sub["<<i+1<<"] Marks : ";
		cin >> s[i];
		total +=s[i];
	}
}


void Student::display_stud()
{
    per = total / 5;
	for(int i=0;i<5;i++)
	{
		cout << "\n\n\tEnter Sub["<<i+1<<"] Marks : "<< s[i];
    }
    cout << "\n\n\tTotal Marks                   : "<< total;
    cout << "\n\n\tPercentage of Student is      : "<< per;
}


class Teacher : public Person
{
	private :
		int sal;
	public :
		void sal_Teacher()
		{
			sal=35500;
			cout << "\n\n\tSalary of the Teacher is        : "<< sal;
		}
};

main()
{
	string character;
	Teacher T;
	Student S;
	cout << "\n\n\t---------------------Enter the Details--------------------------------";
	T.get_person();
	cout << "\n\n\tRole of the Person (Student/Teacher)    : ";
	cin >> character;
	cout << "\n\n\t---------------------Display Details--------------------------------";
	T.person_details(character);
	if(character == "Student" || character == "student")
	{
		S.mark();
		S.display_stud();
	}
	else if(character == "Teacher" || character == "teacher")
	{
	    T.sal_Teacher();	
	}
	else
	{
		cout << "\n\n\tYour Data is not there in Our System!!!";
	}
}

