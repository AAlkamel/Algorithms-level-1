#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ReadPositiveNumber(string message)
{
  int num;
  do
  {
    cout << message << endl;
    cin >> num;
  } while (num <= 0);

  return num;
}
float HoursToDays(int Hours)
{
  return (float)Hours / 24;
}
float HoursToWeeks(int Hours)
{
  return (float)HoursToDays(Hours) / 7;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    int Hours = ReadPositiveNumber("\nPlease enter the Hours. \n");

    float Days = HoursToDays(Hours);
    float Weeks = HoursToWeeks(Hours);
    cout << Days
         << " day" << endl;
    cout << Weeks
         << " week" << endl;
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
