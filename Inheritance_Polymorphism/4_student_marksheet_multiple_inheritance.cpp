#include <iostream>
using namespace std;

class Student {
protected:
    int roll_no;
    string stud_name;
public:
    Student() {
        cout << "\n\n\tStudent Roll No. : ";
        cin >> roll_no;
        cout << "\n\n\tName of the Student : ";
        cin >> stud_name;
    }
};

class Subject : public Student 
{
    protected:
            int sub[5]; 
    public:
            void stud_sub() 
	        {
                    cout << "\n\n\t---------------------------------------------------------------";
                    for (int i = 0; i < 5; i++) 
		            {
                            cout << "\n\n\tEnter the Marks of Subject [" << i + 1 << "] : ";
                            cin >> sub[i];
                    }
            }
};

class Percentage : public Subject
{
    float per;  
    int total;  
    public:
    void stud_per() 
	{
        total = 0;
        for (int i = 0; i < 5; i++) 
		{
            total += sub[i];
        }
        per = total / 5.0;   
    }

    void display_stud() 
	{
        cout << "\n\n\tRoll No.                       : " << roll_no;
        cout << "\n\n\tName of the Student            : " << stud_name;
        for (int i = 0; i < 5; i++) 
		{
            cout << "\n\n\tSubject [" << i + 1 << "]            : " << sub[i];
        }
        cout << "\n\n\tTotal Marks                    : " << total;
        cout << "\n\n\tPercentage of Student          : " << per << "%";
    }
};

main()
{
    cout << "\n\n\t-----------------------------Enter Details of the Students---------------------------------";
    Percentage P;
    P.stud_sub();
    P.stud_per();
    cout << "\n\n\t---------------------------------Display the Details----------------------------------------";
    P.display_stud();
}

