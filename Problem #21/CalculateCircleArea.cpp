#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Readcircumference(float &circumference)
{
  cout << "\n\n calculate circle area along the circumference\n Enter circumference to calculate the Circle area \n\n enter circumference.\n";
  cin >> circumference;
}
float calculateCircleAreaBycircumference(float circumference)
{
  float pi = (float)22 / 7;
  return (float)pow(circumference, 2) / (4 * pi);
}
void PrintResult(float Area)
{
  printf("\n\n ************************\n\n The Circle area is: %.2f \n\n", Area);
}
int main()
{
  float circumference;
  Readcircumference(circumference);
  PrintResult(calculateCircleAreaBycircumference(circumference));
}
