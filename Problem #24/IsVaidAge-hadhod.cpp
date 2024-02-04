#include <iostream>
#include <string>
using namespace std;

void ReadAge(int &Age)
{
  cout << "\n\n Enter your age.\n";
  cin >> Age;
}
bool ValidateNumberInRange(int Number, int from, int to)
{
  return (Number >= from && Number <= to);
}
void PrintResult(int Age)
{
  ValidateNumberInRange(Age, 18, 45) ? cout << "\n\n ===============================\n\tValid age"
                                     : cout << "\n\n ===============================\n\tNot valid age";
}
int main()
{
  int Age;
  ReadAge(Age);
  PrintResult(Age);
}
