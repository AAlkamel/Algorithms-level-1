#include <iostream>
#include <string>
using namespace std;
void Read3Num(int &Num1, int &Num2, int &Num3)
{
  cout << "\n\n enter three Nums to return max \n\n enter First Num.\n";
  cin >> Num1;
  cout << "\n\n enter second Num.\n";
  cin >> Num2;
  cout << "\n\n enter third Num.\n";
  cin >> Num3;
}
int MaxOf3Numbers(int num1, int num2, int num3)
{
  if (num1 > num2)
  {
    if (num1 > num3)
      return num1;
    else
      return num3;
  }
  else
  {
    if (num2 > num3)
      return num2;
    else
      return num3;
  }
}

void PrintResult(int max)
{
  cout << "\n\n ************************\n\n"
       << "the max is: " << max << endl;
}
int main()
{
  int num1, num2, num3;
  Read3Num(num1, num2, num3);
  PrintResult(MaxOf3Numbers(num1, num2, num3));
}
