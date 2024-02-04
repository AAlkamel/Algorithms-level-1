#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Readcircumference(float &A, float &B, float &C)
{
  cout << "\n\n calculate circle area circle described around an arbitrary triangle\n  sides is A, B, C and B to calculate the Circle area \n\n enter A.\n";
  cin >> A;
  cout << "\n\n enter B\n";
  cin >> B;
  cout << "\n\n enter C\n";
  cin >> C;
}
float calculateCircleArea(float A, float B, float C)
{
  // float pi = 3.14;
  float pi = (float)22 / 7;
  float p = (float)(A + B + C) / 2;

  return (float)pi * pow(((A * B * C) / (4 * pow((p * (p - A) * (p - B) * (p - C)), .5))), 2);
}
void PrintResult(float Area)
{
  printf("\n\n ************************\n\n The Circle area is: %.2f \n\n", Area);
}
int main()
{
  float A, B, C;
  Readcircumference(A, B, C);
  PrintResult(calculateCircleArea(A, B, C));
}
