#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enMonthOfYear
{
  January,
  February,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December

};
string NamesOfMonthOfYear[12] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"};
int ReadNumberInRange(int from, int to)
{
  int num;
  do
  {
    printf("Please enter Month number of year between %d , %d \n\n", from, to);
    cin >> num;
  } while (num < from || num > to);

  return num;
}
enMonthOfYear CheckMonthOfYear(int MonthNumber)
{
  return (enMonthOfYear)MonthNumber;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    int MonthNumber = ReadNumberInRange(1, 12);
    cout << "\n Is " << NamesOfMonthOfYear[(CheckMonthOfYear(MonthNumber) - 1)] << endl;
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
