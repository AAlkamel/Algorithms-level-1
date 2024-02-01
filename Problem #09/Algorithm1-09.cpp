#include <iostream>
#include <string>
using namespace std;
void Read3Number(int &num1, int &num2, int &num3)
{
  cout << "\n\n enter three numbers to sum it \n\n enter First Number.\n";
  cin >> num1;
  cout << "\n\n enter second Number.\n";
  cin >> num2;
  cout << "\n\n enter third Number.\n";
  cin >> num3;
}
int SumOf3Numbers(int num1, int num2, int num3)
{
  return num1 + num2 + num3;
}
void PrintResult(int total)
{
  cout << "\n\n ************************\n\n"
       << total << endl;
}
int main()
{
  int num1, num2, num3;
  Read3Number(num1, num2, num3);
  PrintResult(SumOf3Numbers(num1, num2, num3));
}
