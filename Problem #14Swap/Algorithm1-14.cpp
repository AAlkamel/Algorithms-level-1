#include <iostream>
#include <string>
using namespace std;
void Read2Num(int &Num1, int &Num2)
{
  cout << "\n\n enter two Nums to swap it \n\n enter First Num.\n";
  cin >> Num1;
  cout << "\n\n enter second Num.\n";
  cin >> Num2;
}
void Swap2Numbers(int &num1, int &num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

void PrintResult(int num1, int num2)
{
  cout << "\n\n ************************\n\n"
       << num1 << endl
       << num2 << endl;
}
int main()
{
  int num1, num2;
  Read2Num(num1, num2);
  PrintResult(num1, num2);
  Swap2Numbers(num1, num2);
  PrintResult(num1, num2);
}
