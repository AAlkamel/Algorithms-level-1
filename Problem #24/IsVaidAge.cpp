#include <iostream>
#include <string>
using namespace std;

void ReadAge(short &Age)
{
  cout << "\n\n Enter your age.\n";
  cin >> Age;
}
bool isValidAge(short Age)
{
  return (Age >= 18 && Age <= 45);
}
void PrintResult(bool isValid)
{
  isValid ? cout << "\n\n ===============================\n\tValid age"
          : cout << "\n\n ===============================\n\tNot valid age";
}
int main()
{
  short Age;
  ReadAge(Age);
  PrintResult(isValidAge(Age));
}
