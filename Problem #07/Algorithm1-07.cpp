#include <iostream>
#include <string>
using namespace std;
int readNum()
{
  int num;
  cout << "\n\nenter number\n\n";
  cin >> num;
  return num;
}
float halfNum(int num)
{
  return (float)num / 2;
}
void printResult(int num)
{
  cout << "\n\n************************\n\n"
       << "The half of " + to_string(num) << " is: " + to_string(halfNum(num)) << "\n"
       << endl;
}
int main()
{
  printResult(readNum());
  return 0;
}
