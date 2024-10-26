/*2. Define a class to represent a bank account. Include the following members:
   Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;

class Bank
{
    private:
        string dep_name;
        double acc_no;
        string type_acc;
        int bal_amt;

    public:
        Bank()
        {
            bal_amt = 15540;  // Initial balance
        }

        void assign_value()
        {
            cout << "\n\n\tName of the Depositor : ";
            cin >> dep_name;
            cout << "\n\n\tAccount Number        : ";
            cin   >>   acc_no;
            cout << "\n\n\tType of Account       : ";
            cin >> type_acc;
        }

        void deposite_amt()
        {
            int dep_amt;
            cout << "\n\n\tDeposit the Money     : ";
            cin >> dep_amt;
            bal_amt += dep_amt;
        }

        void withdraw_amt()
        {
            cout << "\n\n\tYour Balance Amount is : " << bal_amt;
            int amt;
            cout << "\n\n\tWithdraw the Amount   : ";
            cin >> amt;
            if (bal_amt >= amt)
                bal_amt -= amt;
            else
                cout << "\n\n\tYour Balance is not Sufficient...";
        }

        void display_value()
        {
            cout << "\n\n\tDepositor's Name      : " <<  dep_name;
            cout << "\n\n\tBalance Amount is     : " << bal_amt;
        }
};

main()
{
    Bank B;
    cout << "\n\n\tEnter Bank Details------------------------------";
    B.assign_value();
    
    cout << "\n\n\tDeposited the Amount----------------------------";
    B.deposite_amt();
    
    cout << "\n\n\tYour Details------------------------------------";
    B.display_value();
    
    cout << "\n\n\n\tWithdraw the Amount-----------------------------"; 
    B.withdraw_amt();
    cout << "\n\n\tRemaining Balance-------------------------------";
    B.display_value();
}






