#include <iostream>
#include <string>
using namespace std;
void Read3mark(int &mark1, int &mark2, int &mark3)
{
  cout << "\n\n enter three marks to Average it \n\n enter First mark.\n";
  cin >> mark1;
  cout << "\n\n enter second mark.\n";
  cin >> mark2;
  cout << "\n\n enter third mark.\n";
  cin >> mark3;
}
int SumOf3Numbers(int num1, int num2, int num3)
{
  return num1 + num2 + num3;
}
float AverageOf3marks(int mark1, int mark2, int mark3)
{
  return (float)SumOf3Numbers(mark1, mark2, mark3) / 3;
}
void PrintResult(float Average)
{
  cout << "\n\n ************************\n\n"
       << Average << endl;
}
int main()
{
  int num1, num2, num3;
  Read3mark(num1, num2, num3);
  PrintResult(AverageOf3marks(num1, num2, num3));
}
