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
float TotalBillAfterServiceAndTax(float TotalBill)
{
  TotalBill *= 1.1;
  TotalBill *= 1.16;
  return TotalBill;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    float TotalBill = ReadPositiveNumber("\nPlease enter the total bill. \n");

    float Result = TotalBillAfterServiceAndTax(TotalBill);
    cout << "Total bill after services ant taxes: \n"
         << Result << endl;
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
