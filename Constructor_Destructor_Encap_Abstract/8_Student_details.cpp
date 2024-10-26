/*
8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation
*/
#include<iostream>
using namespace std;

class Student 
{
	private :
		string name;
		int student_class;
		int roll_no;
		int sub[5];
		
	public :
		void assign_value()
		{
			cout << "\n\n\t-----------------------Enter Details of the Student------------------------";
			cout << "\n\n\tEnter Name of the Student                 : ";
			cin >> name;
			cout << "\n\n\tEnter Class of the Student                : ";
			cin >> student_class;
			cout << "\n\n\tEnter the Roll Number                     : ";
			cin >> roll_no;
			for(int i =0; i<5; i++)
			{
				cout << "\n\n\tEnter the Sub["<<i+1<<"] Marks        : ";
				cin >> sub[i];
			}
		}
		void display_value()
		{
			int total=0;
			float per;
			cout << "\n\n\t-----------------------Display Details of the Student------------------------";
			cout << "\n\n\tEnter Name of the Student                 : "<< name;
			cout << "\n\n\tEnter Class of the Student                : "<< student_class;
			cout << "\n\n\tEnter the Roll Number                     : "<< roll_no;
			for(int i =0; i<5; i++)
			{
				cout << "\n\n\tEnter the Sub["<<i+1<<"] Marks        : "<< sub[i];
				total +=sub[i];
			}
			per = total/5;
			if(per >= 70)
			     cout << "\n\n\tGrade        :  A";
			else if(per >= 60 && per <70)
			     cout << "\n\n\tGrade        :  B";
			else if(per >=50 && per <60)
			     cout << "\n\n\tGrade        :  C";
			else if(per >= 35 && per < 50)
			     cout << "\n\n\tGrade        :  D";
			else
			     cout << "\n\n\tFailed ! Better Luck Next Year............";
		}	
};

main()
{
	Student S;
	S.assign_value();
	S.display_value();
}
