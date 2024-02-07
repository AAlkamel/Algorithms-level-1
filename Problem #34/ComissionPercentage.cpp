#include <iostream>
#include <string>
using namespace std;
float ReadTotalSales()
{
  float sales;
  cout << "Please enter your total sales.\n";
  cin >> sales;
  return sales;
}
float GetComissionPercentage(float sales)
{
  if (sales > 1000000)
    return 0.01;
  else if (sales > 500000)
    return 0.01;
  else if (sales > 500000)
    return 0.02;
  else if (sales > 100000)
    return 0.03;
  else if (sales > 50000)
    return 0.05;
  else
    return 0.00;
}
float CalculateTotalComission(float sales)
{
  return GetComissionPercentage(sales) * sales;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    float sales = ReadTotalSales();
    cout << "\n Comission percentage: " << GetComissionPercentage(sales) << "\n";
    cout << "\n Total comission: " << CalculateTotalComission(sales) << "\n";
    cout << "========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
