#include<iostream>
using namespace std;

class Calculate 
{
  public:
	
    int area(int l, int b) 
	{
        return l * b;
    }

    float area(float l, float b) 
	{
        return 0.5 * l * b;
    }
    
    float area(int r) 
	{
        return 3.14 * r * r;
    }
};

main() 
{
    Calculate C;
    int len, bre, rad;
    
    cout << "\n\n\tEnter the Length of Rectangle:  ";
    cin >> len;
    cout << "\n\n\tEnter the Breadth of Rectangle:  ";
    cin >> bre;
    
    cout << "\n\n\tEnter the radius of Circle:  ";
    cin >> rad;

    cout << "\n\n\tArea of Rectangle is: " << C.area(len, bre);
    cout << "\n\n\tArea of Triangle is: " << C.area(static_cast<float>(len), static_cast<float>(bre));
    cout << "\n\n\tArea of Circle is: " << C.area(rad);

}

