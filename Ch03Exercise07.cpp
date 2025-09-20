// Charles Edge
// CS310-T301
// M2: Assignment

#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main() {
    // Declares the variables used in this program
    double netBalance, payment, interestRate, averageDailyBalance, interest;
    //Sets d1 and d2 as integers
    int d1, d2;

    // Input value for total balance on statement as netBalance
    cout << "Enter the total balance shown on the statement: $";
    cin >> netBalance;
    // Input value for payment amount as payment
    cout << "Enter the payment amount: $";
    cin >> payment;
    // Input value for days in billing cycle as integer d1
    cout << "Enter the number of days in the billing cycle (d1): ";
    cin >> d1;
    // Input value for days payment was made before billing cycle as integer d2
    cout << "Enter the number of days the payment was made before the billing cycle (d2): ";
    cin >> d2;
    // Input value for monthly interest rage as interestRate
    cout << "Enter monthly interest rate (i.e., 0.0249 for 29.9% APR): ";
    cin >> interestRate;

    // Calculates the average daily balance
    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    // Calculates the actual interest
    interest = averageDailyBalance * interestRate;

    // Formats the output as specified in the assignment with two decimal places and the thousands separator 
    cout << fixed << setprecision(2); 
    locale loc(""); 
    cout.imbue(loc);

    // Actual output to screen displaying the interest variable
    cout << "\nThe total interest on the unpaid balance is: $" << interest << endl;

    return 0;
}
