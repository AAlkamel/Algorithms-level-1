#include <iostream>
#include <string>
#include <cmath>
using namespace std;
float ReadPositiveNumber(string message)
{
  float num;
  do
  {
    cout << message << endl;
    cin >> num;
  } while (num <= 0);

  return num;
}
float TotalMonthes(float LoanAmount, float MonthlyPayment)
{
  return (float)LoanAmount / MonthlyPayment;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    float LoanAmount = ReadPositiveNumber("Please enter the loan amount.\n");
    float MonthlyPayment = ReadPositiveNumber("Please enter the monthly payment.\n");
    cout << TotalMonthes(LoanAmount, MonthlyPayment) << " months" << endl;
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
