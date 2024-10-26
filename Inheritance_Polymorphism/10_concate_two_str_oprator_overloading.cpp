//10.Write a programto concatenate the two strings using Operator Overloading
#include<iostream>
#include<string>
using namespace std;

class String 
{
private:
    string str;

public:
    String() 
	{
		
	}

    String(string s) 
	{
        str = s;
    }

    String operator + (const String& s) 
	{
        String temp;
        temp.str = str + s.str;  
        return temp;
    }

    
    void display() 
	{
        cout << str << endl;
    }
};

main() 
{
    string s1, s2;

    // Taking input for two strings
    cout << "\n\n\tEnter the first string: ";
    getline(cin, s1);
    cout << "\n\n\tEnter the second string: ";
    getline(cin, s2);
    
    String str1(s1);
    String str2(s2);

    String result = str1 + str2;

    cout << "\n\n\tConcatenated String: ";
    result.display();

    
}

