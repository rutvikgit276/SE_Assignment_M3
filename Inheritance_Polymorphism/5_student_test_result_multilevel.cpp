/*
5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>
using namespace std;
class Student 
{
	protected :
		int roll_no;
	public :
		Student()
		{
			cout << "\n\n\t Enter the Roll Number of the Student                : ";
			cin >> roll_no;
		}
};

class Test : public Student
{
	protected :
		int sub[2];
	public :
		void stud_marks()
		{
			cout << "\n\n\t---------------------------------------------------------------";
			for(int i=0; i<2; i++)
			{
				cout << "\n\n\tEnter the Subject ["<<i+1<<"] : ";
				cin >> sub[i];
			}
		}
};

class Result : public Test
{
	private :
		int total;
	public :
		void total_marks()
		{
			total = 0;
			for(int i=0; i<2; i++)
			{
				total +=sub[i];
			}
		}
		void print()
		{
			cout << "\n\n\tRoll No.                        : "<<roll_no;
			for(int i=0; i<2; i++)
			{
			    cout << "\n\n\tSubject ["<<i+1<<"]             : "<< sub[i];
			}
			cout << "\n\n\tTotal Marks of the Student      : "<<total;
		 
		}
};

main()
{
	Result R;
	R.stud_marks();
	R.total_marks();
	cout << "\n\n\t-------------------------------Display-----------------------------------------";
	R.print();
}
