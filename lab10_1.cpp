#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double PrevBalance ,y,payment;
	cout << "Enter initial loan: ";
	cin >> PrevBalance ;
	cout << "Enter interest rate per year (%): ";
	cin >> y;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;
	double total, interest, NewBalance;
	int EndOfYear=0;

		cout << setw(13) << left << "EndOfYear#"; 
		cout << setw(13) << left << "PrevBalance"; 
		cout << setw(13) << left << "Interest"; 
		cout << setw(13) << left << "Total";
		cout << setw(13) << left << "Payment";
		cout << setw(13) << left << "NewBalance";
		cout << "\n";

		do
		{
			EndOfYear+=1;
			PrevBalance=PrevBalance;
			interest=PrevBalance*(y/100);
			total=PrevBalance+interest;
			if (total>payment)
			{
				NewBalance=total-payment;
			}else if (total<payment)
			{
				payment=total;
				NewBalance=total-total;
			}
			
			
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << EndOfYear; 
			cout << setw(13) << left << PrevBalance ;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << payment;
			cout << setw(13) << left << NewBalance;
			cout << "\n";

			if (NewBalance>0)
			{
				PrevBalance=NewBalance;
			}else if (NewBalance==0)
			{
				break;
			}
			
		} while (1);
	
	return 0;
}

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect

	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
		