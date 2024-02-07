#include <iostream>
#include <string>
using namespace std;
int ReadNum()
{
  int num;
  cout << "\n\nenter number\n\n";
  cin >> num;
  return num;
}

void power_2_3_4(int N)
{
  int a, b, c;
  a = N * N;
  b = N * N * N;
  c = N * N * N * N;
  cout << "\n\n"
       << a << "\t" << b << "\t" << c << endl;
}

int main()
{
  power_2_3_4(ReadNum());
}
