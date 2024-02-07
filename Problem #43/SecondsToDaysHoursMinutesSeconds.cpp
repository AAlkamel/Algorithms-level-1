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
struct stDuration
{
  int days, hours, minutes, seconds;
};
stDuration SecondsToDaysHoursMinutesSeconds(int seconds)
{
  stDuration duration;
  const int minute = 60;
  const int hour = minute * 60;
  const int day = hour * 24;

  duration.days = floor(seconds / day);
  duration.hours = floor((seconds % day) / hour);
  duration.minutes = floor((seconds % hour) / minute);
  duration.seconds = (seconds % minute);

  return duration;
}
void PrintTaskDurationDetails(stDuration duration)
{
  cout << '\n'
       << duration.days << ":"
       << duration.hours << ":"
       << duration.minutes << ":"
       << duration.seconds << endl;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    int seconds = ReadPositiveNumber("Please enter time in seconds.");
    stDuration Duration = SecondsToDaysHoursMinutesSeconds(seconds);
    PrintTaskDurationDetails(Duration);
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
