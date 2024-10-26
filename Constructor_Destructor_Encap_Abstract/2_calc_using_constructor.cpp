/*2. Write a program of Addition, Subtraction, Division, Multiplication using
constructor.
*/

#include<iostream>
using namespace std;

class Calc
{
	private :
		int num1;
		int num2;
	
	public :
		void print_Op()
		{ 
		    cout<<"\n\n\tAddition of "<<num1<<" and "<<num2<<" is                  : "<<num1+num2;
			cout<<"\n\n\tSubstraction of "<<num1<<" and "<<num2<<" is              : "<<num1-num2;
			if(num2 > 0)
			{
			        cout<<"\n\n\tDivision of "<<num1<<" and "<<num2<<" is                  : "<<num1/num2;
			}
			else
			{
				    cout<<"\n\n\tDivision is Invalid !";
			}
			cout<<"\n\n\tMultiplication of "<<num1<<" and "<<num2<<" is            : "<<num1*num2;	
		}
		Calc()
		{
			cout<<"\n\n\tEnter First Number            : ";
	        cin>>num1;
	        cout<<"\n\n\tEnter Second Number           : ";
	        cin>>num2;
		}
};

main()
{
	Calc C;
	C.print_Op();
}

