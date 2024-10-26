/*
8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include<iostream>
using namespace std;

class Mathematic_Operation
{ 
	public :
		int math(int a, int b)
		{
		    return a+b;
		}
		int math(int a, int b, char op)
		{
			if(op == '-')
				return a - b;
			return 0;
		}
		int math(float a, float b)
		{
		    return a * b;
		}
		int math(double a, double b)
		{
			if(b != 0)
			    return a/b;
			else
			    return 0;
		}
	
};

main()
{
	Mathematic_Operation M;
	int a = 23, b = 21;
	char op = '-';
	float num1=4, num2 = 6;
	double num3 = 66, num4 = 11;
	
	cout << "\n\n\tAddition of "<<a<<" and "<<b<<" is = "<<M.math(a,b);
	cout << "\n\n\tSubstraction of "<<a<<" and "<<b<<" is = "<<M.math(a,b,op);
	cout << "\n\n\tMultiplication of "<<a<<" and "<<b<<" is = "<<M.math(num1,num2);
	cout << "\n\n\tDivision of "<<a<<" and "<<b<<" is = "<<M.math(num3,num4);
}
