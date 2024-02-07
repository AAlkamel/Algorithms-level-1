#include <iostream>
#include <string>
using namespace std;
int ReadNumber(string message)
{
  float num;
  cout << message << endl;
  cin >> num;
  return num;
}
int SumNumbers()
{
  int sum = 0, number = 0, counter = 1;
  do
  {
    number = ReadNumber("\n please enter " + to_string(counter));
    if (number == -99)
    {
      break;
    }
    sum += number;
    counter++;
  } while (number != -99);
  return sum;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");

    cout << "\n Result: " + to_string(SumNumbers()) << endl;
    cout << "========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
