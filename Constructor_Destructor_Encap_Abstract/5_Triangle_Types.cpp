/*
5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/
#include<iostream>
using namespace std;

class Triangle
{
	private :
		int length;
		int breadth;
		int height;
		
	public :
		Triangle()
		{
				cout << "\n\n\t--------------------------------------------";
	            cout << "\n\n\tEnter Length of the Triangle           : ";
	            cin >> length;
	            cout << "\n\n\tEnter breadth of the Triangle           : ";
	            cin >> breadth;
	            cout << "\n\n\tEnter Height of the Triangle           : ";
	            cin >> height;
		}
		
		void equilateral()
		{
		    if(length == breadth && breadth == height)
		            cout <<"\n\n\tTriangle is Equilateral";
	    }
	    
	    void isosceles()
	    {
	    	if(length == breadth || breadth == height || length == height)
	                cout <<"\n\n\tTriangle is Isosceles";
	    }
	    
	    void scalene()
	    {
		    if(length != breadth && breadth != height && length != height)  
			        cout <<"\n\n\tTriangle is Scalene";
		}
};

main()
{
	Triangle T;
	T.equilateral();
	T.isosceles();
	T.scalene();
}

