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
struct stTaskDuration
{
  int days, hours, minutes, seconds;
};
stTaskDuration ReadTaskDuration()
{
  stTaskDuration TaskDuration;
  TaskDuration.days = ReadPositiveNumber("Please enter task days");
  TaskDuration.hours = ReadPositiveNumber("Please enter task hours");
  TaskDuration.minutes = ReadPositiveNumber("Please enter task minutes");
  TaskDuration.seconds = ReadPositiveNumber("Please enter task seconds");
  return TaskDuration;
}
int CalculateTaskDurationInSeconds(stTaskDuration TaskDuration)
{
  return (TaskDuration.days * 24 * 60 * 60 +
          TaskDuration.hours * 60 * 60 +
          TaskDuration.minutes * 60 +
          TaskDuration.seconds);
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    stTaskDuration TaskDuration = ReadTaskDuration();
    int TaskDurationInSeconds = CalculateTaskDurationInSeconds(TaskDuration);
    cout << "Task duration: " << TaskDurationInSeconds
         << " seconds" << endl;
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
