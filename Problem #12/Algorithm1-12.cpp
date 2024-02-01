#include <iostream>
#include <string>
using namespace std;
void Read2Num(int &Num1, int &Num2)
{
  cout << "\n\n enter two Nums to return max \n\n enter First Num.\n";
  cin >> Num1;
  cout << "\n\n enter second Num.\n";
  cin >> Num2;
}
int MaxOf2Numbers(int num1, int num2)
{
  if (num1 > num2)
    return num1;
  else
    return num2;
}

void PrintResult(int max)
{
  cout << "\n\n ************************\n\n"
       << "the max is: " << max << endl;
}
int main()
{
  int num1, num2;
  Read2Num(num1, num2);
  PrintResult(MaxOf2Numbers(num1, num2));
}
