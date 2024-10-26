/*1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/
#include<iostream>
using namespace std;
class Cricketer
{
	protected :
		string Name;
		int match;
	public :
		void cricketer_details()
		{
			cout << "\n\n\tEnter the Name of the Cricketer     : ";
			cin >> Name;
			cout << "\n\n\tEnter Total No. of Matched Played!  : ";
			cin >>match;
		}
		void display_details()
		{
			cout << "\n\n\tName of the Cricketer     : "<< Name;
			cout << "\n\n\tTotal No. of Matched Played!  : "<< match;
		}
		
};

class Batsman :public Cricketer
{
	private :
		int total_runs;
		int avg_run;
		int best_performance;
    public :
    	void get_batsman()
    	{
    		cout << "\n\n\tEnter Total Runs of Batsman           : ";
    		cin >> total_runs;
    		cout << "\n\n\tBest Performance of Batsman     : ";
    		cin >> best_performance;
		}
		void Display_batsman()
    	{
    		cout << "\n\n\tTotal Runs of Batsman           : "<< total_runs;
    		cout << "\n\n\tBest Performance of Batsman     : "<< best_performance;
		}
		void calculate_avg();
		
};
void Batsman::calculate_avg()
{
	if(match != 0)
	{
		avg_run = total_runs / match;
	    cout << "\n\n\tAverage runs of Batsmans is    : "<< avg_run;
	}
	else
	    cout << "\n\n\tAverage runs = 0";
}

main()
{
	Batsman B;
	cout << "\n\n\t---------------------------------- Input Details ------------------------------------";
	B.cricketer_details();
	B.get_batsman();
	cout << "\n\n\t-------------------------------------Display-----------------------------------------";
	B.display_details();
	B.Display_batsman();
	B.calculate_avg();
}
