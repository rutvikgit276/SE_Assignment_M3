//1. WAP to create simple calculator using class

#include<iostream>
#include<stdlib.h>
using namespace std;

class Calc
{
	private :
		int a, b;
	
	public :
		int add(int , int);
		int sub(int , int);
		int mul(int , int);
		float div(int , int);
		
		
};

inline int Calc::add(int num1, int num2)
{
	a = num1;
	b = num2;
	return a + b;
}

inline int Calc::sub(int num1, int num2)
{
	a=num1;
	b=num2;
	return a-b;
}

inline int Calc::mul(int num1, int num2)
{
	a=num1;
	b=num2;
	return a*b;
}

inline float Calc::div(int num1, int num2)
{
	a=num1;
	b=num2;
	if(b > 0)
	{
		return a/b;	
	}
	else
	{
		cout<<"\n\n\tInvalid";
	}
}

main()
{
	Calc C;
	int num1, num2;
	int ch;
	char c;
	int add, sub, mul, div;
	do
	{
	
	    cout<<"\n\n\tEnter the First Number : ";
	    cin>>num1;
	    cout<<"\n\n\tEnter the Second Number : ";
	    cin>>num2;
	    cout<<"\n\n\t-------------Menu---------------------";
	    cout<<"\n\n\tPress 1 for Addition";
	    cout<<"\n\n\tPress 2 for Subtraction";
	    cout<<"\n\n\tPress 3 for Multiplication";
	    cout<<"\n\n\tPress 4 for Division";
	    cout<<"\n\n\tPress 5 for Exit";
	
	
	    cout<<"\n\n\tSelect the Choice : ";
	    cin>>ch;
	    switch(ch)
	    {
		    case 1:
			   add=C.add(num1, num2);
			   cout<<"\n\n\tAddition of "<<num1<<" and "<<num2<<" is  : "<<add;
			   break;
		    case 2:
			   sub=C.sub(num1, num2);
			   cout<<"\n\n\tsubtraction of "<<num1<<" and "<<num2<<" is  : "<<sub;
			   break;
		    case 3:
			   mul=C.mul(num1, num2);
			   cout<<"\n\n\tMultiplication of "<<num1<<" and "<<num2<<" is  : "<<mul;
			   break;
		    case 4:
			   div=C.div(num1, num2);
			   if(num2 > 0)
			   {
			      cout<<"\n\n\tDivision of "<<num1<<" and "<<num2<<" is  : "<<div;
			   }
			   break;
			case 5:
				exit(0);
				break;
		    default :
			    cout<<"\n\n\tYou Select Invalid Choice......";
			    break;
			
	    }
	    cout<<"\n\n\tDo you want to continue (press y or n)";
	    cin>>c;
    } while(c=='y' || c=='Y');
    
}

