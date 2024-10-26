//2. Write a program of to sort the array using templates
#include<iostream>
using namespace std;

template <class T>
void sortArray(T arr[], int n) 
{
    for (int i = 0; i < n-1; i++) 
	{
        for (int j = 0; j < n-i-1; j++) 
		{
            if (arr[j] > arr[j+1]) 
			{
    
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template <class T>
void displayArray(T arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

main() 
{
    int n;

    cout << "\n\n\tEnter the number of elements in the integer array: ";
    cin >> n;
    int intArr[n];
    
    cout << "\n\n\tEnter the elements of the integer array: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> intArr[i];
    }
    
    cout << "\n\n\tOriginal Integer Array: ";
    displayArray(intArr, n);

    sortArray(intArr, n);
    
    cout << "\n\n\tSorted Integer Array: ";
    displayArray(intArr, n);

}

