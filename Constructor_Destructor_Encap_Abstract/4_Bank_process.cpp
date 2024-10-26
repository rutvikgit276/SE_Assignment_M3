/*
4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/
#include<iostream>
using namespace std;

class Bank
{
	private :
		double acc_num;
		int bal;
	public :
		void get_value()
		{
			cout << "\n\n\t-------------------Enter Bank Details------------------------";
			cout << "\n\n\tEnter Account Number               : ";
			cin >>acc_num;
		}
		Bank()
		{
			bal=30000;
		}
		void deposite()
		{
			int dep_amt;
			cout << "\n\n\t-------------------------------------------";
			cout << "\n\n\tEnter Deposit Amount                 :";
			cin >> dep_amt;
			bal += dep_amt;
			cout << "\n\n\tTotal Balance is                      : "<<bal;
		}
		
		void withdraw()
		{
			int amt;
			cout << "\n\n\t-------------------------------------------";
			cout << "\n\n\tEnter Withdraw Amount                       :";
			cin >> amt;
			if(bal > amt)
			{
			    bal -= amt;
			    cout << "Total Balance is              : "<<bal;
			}
			else
			    cout << "\n\n\tWithdraw Amount is Not Sufficent......";
		}
};

main()
{
	Bank B;
	B.get_value();
	B.deposite();
	B.withdraw();
}
