#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enDayOfWeek
{
  Sunday = 1,
  Monday = 2,
  Tuesday = 3,
  Wednesday = 4,
  Thursday = 5,
  Friday = 6,
  Saturday = 7
};
string NamesOfDaysOfWeek[7] = {
    "Sunday",
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday"};
int ReadNumberInRange(int from, int to)
{
  int num;
  do
  {
    printf("Please enter day number of week between %d , %d \n\n", from, to);
    cin >> num;
  } while (num < from || num > to);

  return num;
}
enDayOfWeek CheckDayOfWeek(int DayNumber)
{
  return (enDayOfWeek)DayNumber;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    int dayNumber = ReadNumberInRange(1, 7);
    cout << "\n Is " << NamesOfDaysOfWeek[(CheckDayOfWeek(dayNumber) - 1)] << endl;
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
