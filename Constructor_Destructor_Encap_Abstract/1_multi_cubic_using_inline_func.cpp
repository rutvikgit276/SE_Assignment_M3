/*1.Write a programto find the multiplication values and the cubic values using
inline function*/

#include<iostream>
using namespace std;

class Number
{
	private :
		int number;
	
	public :
		inline void Square(int n)
		{
			number=n;
			cout << "\n\n\tMultiplication value of " << number << "is         : " << number*number;
		}
		
		inline void cube(int n)
		{
			number=n;
			cout <<"\n\n\tCubic value of "<<number << "is                  : " <<number*number*number;
		}

};

main()
{
	Number N;
	int n;
	
	cout << "\n\n\t---------------------Find Square and Cube of Below Number--------------------";
	cout << "\n\n\tEnter the Value             : ";
	cin >> n;
	
	N.Square(n);
	N.cube(n);
}
