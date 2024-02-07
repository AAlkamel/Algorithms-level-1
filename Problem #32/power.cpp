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
int ReadPower()
{
  int num;
  cout << "\n\nenter power\n\n";
  cin >> num;
  return num;
}
int PowerNumOfM(int N, int M)
{
  int p = 1;
  if (M == 0)

    return 1;
  else
    for (int i = 0; i < M; i++)
      p *= N;

  return p;
}

int main()
{
  cout << "\n"
       << PowerNumOfM(ReadNum(), ReadPower()) << endl;
}
