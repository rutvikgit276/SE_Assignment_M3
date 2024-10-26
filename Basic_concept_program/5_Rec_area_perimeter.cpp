/*5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;

class Rectangle //Class_name
{
	private :
	        int length, breadth;

	public :
		//Function For Area
		inline int area(int l, int b)//Inline Function with return and with Argument........
		{
			length=l;
			breadth=b;
			return length*breadth;
		}
		
		//Function for Perimeter
		inline int perimeter(int l, int b)
		{
			length=l;
			breadth=b;
			return 2*(length+breadth);
		} 	
};

main()
{
	Rectangle R; //Object....
	int l, b;
	
	cout << "\n\n\t--------------Find Area and Perimeter of Rectangle------------------";
	//Input length and breadth
	cout << "\n\n\tEnter the Length of the Rectangle : ";
	cin >> l;
	cout << "\n\n\tEnter the Breadth of the Rectangle : ";
	cin >> b;
	
	int ar, per;
	
	ar=R.area(l,b);
	per=R.perimeter(l,b);
	
	cout << "\n\n\tArea of Rectangle is                   : "<<ar;
	cout << "\n\n\tPerimeter of Rectangle is              :"<<per;
}
