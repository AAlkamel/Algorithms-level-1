#include <iostream>
#include <string>
using namespace std;
void PrintLettersAtoZ()
{
  for (short i = 65; i <= 90; i++)
  {
    cout << char(i) << endl;
  }
}
int main()
{
  PrintLettersAtoZ();
}
