// Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;

class Rectangle{
	protected :
		int l, b;
	public :
		void get_rect()
		{
			cout << "\n\n\tEnter the Length of the Rectangle     : ";
			cin >> l;
			cout << "\n\n\tEnter the breadth of the Rectangle    : ";
			cin >> b;
		}
		void display_rect()
		{
			cout << "\n\n\tLength of the Rectangle     : "<< l;
			cout << "\n\n\tBreadth of the Rectangle    : "<< b;
		}
};

class Area :public Rectangle{
	private :
		int area;
		
	public :
		void area_react();
};

void Area::area_react()
{
	area = l*b;
	cout << "\n\n\tArea of Rectangle is    : "<< area;
}

main()
{
	Area A;
	cout << "\n\n\t---------------------Enter Details----------------------------";
	A.get_rect();
	cout << "\n\n\t-----------------------Display----------------------------";
	A.display_rect();
	cout << "\n\n\t---------Area of Rectangle------------";
	A.area_react();
}
