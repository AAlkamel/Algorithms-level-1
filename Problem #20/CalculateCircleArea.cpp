#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Readside(float &side)
{
  cout << "\n\n calculate Circle area inscribed in a square\n Enter square side to calculate the Circle area \n\n enter side.\n";
  cin >> side;
}
float calculateCircleAreaByside(float side)
{
  float pi = (float)22 / 7;
  return (float)(pi * pow(side, 2)) / 4;
}
void PrintResult(float Area)
{
  printf("\n\n ************************\n\n The Circle area is: %.2f \n\n", Area);
}
int main()
{
  float side;
  Readside(side);
  PrintResult(calculateCircleAreaByside(side));
}
