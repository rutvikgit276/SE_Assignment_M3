/*
4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/
#include<iostream>
using namespace std;

class Circle //Class_name
{
	private :
	        int rad;
	        float pie;
	public :
		//Function For Area
		inline float area(int r, float pi)//Inline Function with return and with Argument........
		{
			rad=r;
			pie=pi;
			return pie*r*r;
		}
		
		//Function for Circumferenece
		inline float circumference(int r, float pi)
		{
			rad=r;
			pie=pi;
			return 2*pie*r;
		} 	
};

main()
{
	Circle C; //Object....
	int r;
	float pi=3.14;
	
	//Input Radius
	cout << "\n\n\tEnter the Radius of Circle : ";
	cin >> r;
	
	float ar, cir;
	
	ar=C.area(r,pi);
	cir=C.circumference(r,pi);
	
	cout << "\n\n\tArea of circle is                   : "<<ar;
	cout << "\n\n\tCircumference of circle is          :"<<cir;
}
