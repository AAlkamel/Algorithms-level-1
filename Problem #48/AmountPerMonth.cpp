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
float AmountPerMonth(float LoanAmount, float Months)
{
  return (float)LoanAmount / Months;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    float LoanAmount = ReadPositiveNumber("Please enter the loan amount.\n");
    float Months = ReadPositiveNumber("Please enter the months.\n");
    cout << AmountPerMonth(LoanAmount, Months) << " $" << endl;
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
