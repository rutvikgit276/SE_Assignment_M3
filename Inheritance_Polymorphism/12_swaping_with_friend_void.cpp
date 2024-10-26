/*12.Write a programto swap the two numbers using friend function
without using third variable*/
#include<iostream>
using namespace std;
class Swapping
{
	int a,b;
	public :
		void get_value()
		{
			cout << "\n\n\tEnter the First Number      : ";
			cin >> a;
			cout << "\n\n\tEnter the First Number      : ";
			cin >> b;
		}
		friend void swap(Swapping);
};

void swap(Swapping s)
{
	cout << "\n\n\t-------------------------------Before Swapping---------------------------------------";
	cout << "\n\n\t A   =   "<<s.a;
	cout << "\n\n\t B   =   "<<s.b;
	s.a=s.a+s.b;
	s.b=s.a-s.b;
	s.a=s.a-s.b;
	cout << "\n\n\t-------------------------------After Swapping---------------------------------------";
	cout << "\n\n\t A   =   "<<s.a;
	cout << "\n\n\t B   =   "<<s.b;
}

main()
{
	Swapping S;
	S.get_value();
	swap(S);
}

