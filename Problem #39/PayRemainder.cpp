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
float CalculateRemainder(float TotalBill, float CashPaid)
{
  return (float)CashPaid - TotalBill;
}

int main()
{
  char again = 'y';
  do
  {
    system("cls");
    float TotalBill = ReadPositiveNumber("\nPlease enter the total bill. \n");
    float CashPaid = ReadPositiveNumber("\nPlease enter the cash paid. \n");
    float Result = CalculateRemainder(TotalBill, CashPaid);
    cout << "Remainder: " << Result << endl;
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
