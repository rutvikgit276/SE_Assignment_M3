#include<iostream>
using namespace std;

class Matrix {
private:
    int size;
    int* arr;
    
public:

    Matrix(int s) 
	{
        size = s;
        arr = new int[size];
    }
    

    ~Matrix() 
	{
        delete[] arr;
    }

    
    void input() 
	{
        cout << "\n\n\tEnter " << size << " elements of the matrix: ";
        for (int i = 0; i < size; i++) 
		{
            cin >> arr[i];
        }
    }

    Matrix operator + (const Matrix& m) 
	{
        Matrix temp(size);
        for (int i = 0; i < size; i++) 
		{
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }

    void display() 
	{
        cout << "\n\n\tMatrix elements: ";
        for (int i = 0; i < size; i++) 
		{
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

main() 
{
    int size;

    cout << "\n\n\tEnter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "\n\n\tMatrix 1:" << endl;
    matrix1.input();

    cout << "\n\n\tMatrix 2:" << endl;
    matrix2.input();

    Matrix result = matrix1 + matrix2;

    cout << "\n\n\tResultant Matrix after addition:" << endl;
    result.display();

    
}

