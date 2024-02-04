#include <iostream>
#include <string>
using namespace std;
enum enOddEven
{
  even,
  odd
};
int ReadNumber()
{
  int num;
  cout << "\n\n Enter your number.\n";
  cin >> num;
  return num;
}
enOddEven CheckOddEvenNum(int N)
{
  return (N % 2 == 0) ? enOddEven::even : enOddEven::odd;
}

int SumEvenNumbersFromOneToN(int N)
{
  int sum = 0;
  for (int i = N; i > 0; i--)
  {
    if (CheckOddEvenNum(i) == enOddEven::even)
    {

      sum += i;
    }
  }
  return sum;
}

int main()
{
  int N = ReadNumber();
  cout << "\n"
       << SumEvenNumbersFromOneToN(N) << "\n";
}
