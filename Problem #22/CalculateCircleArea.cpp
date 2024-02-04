#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Readcircumference(float &A, float &B)
{
  cout << "\n\n calculate circle area Inscribed in an Isosceles Triangle,\n  A is Symmetrical sides and B is anther side to calculate the Circle area \n\n enter A.\n";
  cin >> A;
  cout << "\n\n enter B\n";
  cin >> B;
}
float calculateCircleArea(float A, float B)
{
  // float pi = 3.14;
  float pi = (float)22 / 7;
  return (float)pi * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
}
void PrintResult(float Area)
{
  printf("\n\n ************************\n\n The Circle area is: %.2f \n\n", Area);
}
int main()
{
  float A, B;
  Readcircumference(A, B);
  PrintResult(calculateCircleArea(A, B));
}
