/*13.Write a program to find the max number from given two numbers
using friend function*/
#include<iostream>
using namespace std;

class Maximum{
	int a, b;
	public :
		Maximum()
		{
			cout << "\n\n\tEnter the First Value      :  ";
			cin >> a;
			cout << "\n\n\tEnter the Second Value      :  ";
			cin >> b;
		}
		
		friend void find_max(Maximum);
		
};
void find_max(Maximum m)
{
	cout << "\n\n\t------------------------------Maximum Number------------------------------";
	if (m.a > m.b)
	   cout << "\n\n\tMax is A  : "<<m.a;
	else if(m.a == m.b)
	   cout << "\n\n\tBoth are Equal ";
	else
	   cout << "\n\n\tMax is B  : "<<m.b;
}

main()
{
	Maximum M;
	find_max(M);
}
