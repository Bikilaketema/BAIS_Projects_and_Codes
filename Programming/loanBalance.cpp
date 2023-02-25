/*Interest on a loan is paid on a declining balance, and hence a loan with an interest rate of,
say, 14 percent can cost significantly less than 14 percent of the balance. Write a program
that takes a loan amount and interest rate as input and then outputs the monthly payments
and balance of the loan until the loan is paid off. Assume that the monthly payments are
one twentieth of the original loan amount, and that any amount in excess of the interest is
credited toward decreasing the balance due. Thus, on a loan of $20,000, the payments
would be $1,000 a month. If the interest rate is 10 percent, then each month the interest is
one-twelfth of 10 percent of the remaining balance. The first month (10 percent of
$20,000)/12, or $166.67, would be paid in interest, and the remaining $833.33 woulddecrease
the balance to $19,166.67. The following month the interest would be (10 percent
of $19,166.67)/12, and so forth. Also have the program output the total interest paid over
the life of the loan. Finally, determine what simple annualized percentage of the original
loan balance was paid in interest. For example, if $1,000 was paid in interest on a $10,000
loan and it took 2 years to pay off, then the annualized interest is $500, which is 5 percent of
the $10,000 loan amount. Your program should allow the user to repeat this calculation as
often as desired.*/

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

int main()
{
    const double MONTHLY_PAYMENT_RATIO = 0.05; // 1/20
    double loanAmount, interestRate;
    string response;

    do
    {

        // Input validation for loanAmount
        do
        {
            cout << "Enter the loan amount: ";
            cin >> loanAmount;
            if (loanAmount <= 0)
            {
                cout << "Invalid input. Loan amount must be greater than 0 and it have to be an integer.\n";
                cin.clear();// clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            }
        } while (loanAmount <= 0);

        // Input validation for interestRate
        // We Assume that out Interest rate is between 1-59
        do
        {
            cout << "Enter the interest rate (as a percentage): ";
            cin >> interestRate;
            if (interestRate <= 0 || interestRate >= 60)
            {
                cout << "Invalid input. Interest rate must be between 1 and 59 and it have to be an integer.\n";
                cin.clear();// clear error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            }
        } while (interestRate <= 0 || interestRate >= 60);

        double monthlyInterestRate = (interestRate / 1200);
        double monthlyPayment = loanAmount * MONTHLY_PAYMENT_RATIO;
        double balance = loanAmount;
        double totalInterest = 0.0;

        cout << std::fixed << std::setprecision(2);
        cout << "Monthly payment: $" << monthlyPayment << endl;
        cout << "Month\tPayment\tInterest\tBalance" << std::endl;


        for (int month = 1; balance > 0.0; month++)
        {
            double interest = balance * monthlyInterestRate;
            double principal = std::min(monthlyPayment - interest, balance);
            balance -= principal;
            totalInterest += interest;

            cout << month << "\t" << principal << "\t" << interest << "\t" << balance << endl;
        }

        double annualizedInterestRate = 100.0 * totalInterest / loanAmount;
        cout << "Total interest paid: $" << totalInterest << endl;
        cout << "Annualized interest rate: " << annualizedInterestRate << "%" << endl;

        cout << "Do you want to continue? (yes | no): ";
        cin >> response;


    } while (response == "yes");

    return 0;
}
