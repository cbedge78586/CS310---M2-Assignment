# CS310---M2-Assignment
## Charles Edge


Required Actions:



Source: chapter 3, programming exercise 7



Interest on a credit card’s unpaid balance is calculated using the average daily balance. Suppose that netBalance is the balance shown in the bill, payment is the payment made, d1 is the number of days in the billing cycle, and d2 is the number of days payment is made before the billing cycle. Then, the average daily balance is:



averageDailyBalance = (netBalance*d1 - payment*d2)/d1


If the interest rate per month is, say, 0.0152, then the interest on the unpaid balance is:

interest = averageDailyBalance*0.0152
Number formatting example: 

// format the output to two decimal places with the thousands separator
            cout << fixed << setprecision(2); // set the decimal to two places.
            locale loc(""); // for the thousands separator 
            cout.imbue(loc); // for the thousands separator 
Write a program that accepts as input netBalance, payment, d1, d2, and interest rate per month. The program outputs the interest. Format your output to two decimal places and use a thousands separator for the dollar amounts.

Do not forget to stage, commit, and push your work to GitHub.

