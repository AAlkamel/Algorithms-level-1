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
  for (int i = 0; i < N; i++)
  {
    cout << i + 1 << endl;
  }
  cout << "\n";
}

int main()
{
  int N = ReadNumber();
  PrintNumbersFromOneToN(N);
}
