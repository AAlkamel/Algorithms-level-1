#include <iostream>
#include <string>
using namespace std;
int ReadNumberInRange(int from, int to)
{
  int num;
  do
  {
    printf("Please enter number between %d , %d \n\n", from, to);
    cin >> num;
  } while (num < from || num > to);

  return num;
}
char GetGradeLetter(int Grade)
{
  if (Grade >= 90)
    return 'A';
  else if (Grade >= 80)
    return 'B';
  else if (Grade >= 70)
    return 'C';
  else if (Grade >= 60)
    return 'D';
  else if (Grade >= 50)
    return 'E';
  else
    return 'F';
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    char Grade = GetGradeLetter(ReadNumberInRange(1, 100));
    cout << "\n Result: " << Grade << endl;
    cout << "\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
