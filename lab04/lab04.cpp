#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//initializes the variables
	double aIR;
	double loanA;
	int paymentNumber;
	double mIR;
	double tempPayment;
	double monthlyPayment;	
	double totalPayment;
	double interest;
	
	//asks the user for their annual interest rate, loan amount, and number of payments to be made
	cout << left;
	cout << setw(83) << "Please enter your loan amount:" << "$";
	cin >> loanA;
	cout << setw(83) << "Please enter your annual interest rate (APR). (EX. %9.0 will be 0.09):";
	cin >> aIR;
	cout << setw(83) << "Please enter the number of monthly payments to be made (EX. 60 for a 5 year loan):";
	cin >> paymentNumber;

	//echos the info from above
	cout << setprecision(2) << fixed;
	cout << setw(83) << "Your loan amount is:" << "$" << loanA << endl;
	cout << setw(83) << "Your annual interest rate is:" << "%" << aIR * 100 << endl;
	cout << setw(83) << "Your number of payments to be made is:" << paymentNumber << endl;
	
	//computes mothnly payment and total amount to be paid
	mIR = aIR / 12.0;
	tempPayment = mIR * (pow(1 + mIR, paymentNumber)) * loanA;
	monthlyPayment = tempPayment / (pow(1 + mIR, paymentNumber) - 1);
	totalPayment = monthlyPayment * paymentNumber;
	
	//prints mothly payment and total amount
	cout << setw(83) << "Your monthly payment is:" << "$" << monthlyPayment << endl;
	cout << setw(83) << "Your total payment amount is:" << "$" << totalPayment << endl;
	
	//calculates total interest paid
	interest = totalPayment - loanA;

	//prints total ineterst paid
	cout << setw(83) << "The total interest on your loan is:" << "$" << interest << endl;
	
}