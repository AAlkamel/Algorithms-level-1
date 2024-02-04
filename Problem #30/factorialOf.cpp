#include <iostream>
#include <string>
using namespace std;

int ReadNumberPositive(string message)
{
  int num;
  do
  {
    cout << "\n\n" + message + "\n";
    cin >> num;
    if (num < 0)
      cout << "\n\n Not Positive Number!\n\n";

  } while (num < 0);

  return num;
}

int factorialOfN(int N)
{
  int factorial = 1;
  for (int i = N; i > 0; i--)
  {

    factorial *= i;
  }
  return factorial;
}

int main()
{
  cout << "\n"
       << factorialOfN(ReadNumberPositive("enter positive N")) << "\n";
}
