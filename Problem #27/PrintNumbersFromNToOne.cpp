#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
  int num;
  cout << "\n\n Enter your number.\n";
  cin >> num;
  return num;
}
void PrintNumbersFromOneToN(int N)
{
  cout << "===================\n\n";
  for (int i = N; i > 0; i--)
  {
    cout << i << endl;
  }
  cout << "\n";
}

int main()
{
  int N = ReadNumber();
  PrintNumbersFromOneToN(N);
}
