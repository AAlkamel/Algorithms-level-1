#include <iostream>
#include <string>
using namespace std;
bool ValidateNumberInRange(int Number, int from, int to)
{
  return (Number >= from && Number <= to);
}
int ReadAge()
{
  int Age;
  cout << "\n\n Enter your age.\n";
  cin >> Age;
  if (!ValidateNumberInRange(Age, 18, 45))
    cout << "\n\n ===============================\n\tNot valid age";
  return Age;
}
int ReadUntilAgeBetween(int from, int to)
{
  int Age = 0;
  do
  {
    Age = ReadAge();
  } while (!ValidateNumberInRange(Age, from, to));

  return Age;
}

void PrintResult(int Age)
{
  ValidateNumberInRange(Age, 18, 45) ? cout << "\n\n ===============================\n\tValid age"
                                     : cout << "\n\n ===============================\n\tNot valid age";
}
int main()
{

  PrintResult(ReadUntilAgeBetween(18, 45));
}
