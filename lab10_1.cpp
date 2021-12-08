#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double loan,interest,interest_rate,pay_back,total; 

int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay_back;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for (int i=0;  loan>0; i++){
		
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i+1; 
		cout << setw(13) << left << loan;
		interest = (loan/100)*interest_rate;
		cout << setw(13) << left << interest;
		total = interest+loan;
		cout << setw(13) << left << total;
		if (pay_back > total)
		{
			pay_back=total;
		}
		cout << setw(13) << left << pay_back;
		loan = total-pay_back;
		cout << setw(13) << left << loan;
		cout << "\n";	
	}

	return 0;
}
