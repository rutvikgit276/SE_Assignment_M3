//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template <class T>
void mySwap(T a, T b)
{
	T c;
	cout <<"\n\n\t----------------------------Before Swapping-------------------------";
	cout << "\n\n\t A   =  "<<a;
	cout << "\n\n\t B   =  "<<b;
	c=a;
	a=b;
	b=c;
	cout <<"\n\n\t----------------------------After Swapping-------------------------";
	cout << "\n\n\t A   =  "<<a;
	cout << "\n\n\t B   =  "<<b;	
}

main()
{
	int x, y;
	cout << "\n\n\tEnter A   =  ";
	cin >> x;
	cout << "\n\n\tEnter B   =  ";
	cin >> y;
	mySwap(x, y);
}
