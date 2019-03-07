#include <iostream>
using namespace std;

double tipPercent( double w){
		double tip;
		tip = w  * 0.15;
//		change = w % 0.15;
//		cout << "Your tip should be "<< tip << "." << change;
		return tip;
}

double changeAmount( double a){
	double change = a;
	double quarters = 0;
	double remainder = 0;
	if(change > 0.25){
		quarters = change / .25;
		cout << "you have " << quarters << " Quarters" << endl;
//		change = change % .25;
//		cout << "the remainder of change is " << change << endl;
	}
	return change;
}
	
int main() {

int answer = 0 , tip = 0;
double total;
double change;

cout << "How much was your total ?\n";
cin >> total;

cout << "What would you like to do press (1) to see a 15$ tip amount\n";
cout << "(2) to see the equivalant amount in change. \n";
cout << "(3) to see an exchange rate. \n";

cin >> answer;

switch (answer)
	{
	case 1:
		tip = tipPercent(total);
	    cout << "Your tip should be  " << tip << endl;	
		break;
		
	case 2:
		change = changeAmount(total);
	
	break;
	}
	
return 0;
	
}