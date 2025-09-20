#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main() {
    // Declare variables
    double netBalance, payment, interestRate, averageDailyBalance, interest;
    int d1, d2;

    // Input values
    cout << "Enter net balance: $";
    cin >> netBalance;

    cout << "Enter payment amount: $";
    cin >> payment;

    cout << "Enter number of days in billing cycle (d1): ";
    cin >> d1;

    cout << "Enter number of days payment was made before billing cycle (d2): ";
    cin >> d2;

    cout << "Enter monthly interest rate (e.g., 0.0152): ";
    cin >> interestRate;

    // Calculate average daily balance
    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;

    // Calculate interest
    interest = averageDailyBalance * interestRate;

    // Format output
    cout << fixed << setprecision(2); // two decimal places
    locale loc(""); // system locale for thousands separator
    cout.imbue(loc);

    cout << "\nInterest on unpaid balance: $" << interest << endl;

    return 0;
}
