#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadRadius(float &radius)
{
  cout << "\n\n Enter Circle radius to calculate the Circle area \n\n enter radius.\n";
  cin >> radius;
}
float calculateCircleAreaByRadius(float radius)
{
  float pi = (float)22 / 7;
  return (float)pi * pow(radius, 2);
}
void PrintResult(float Area)
{
  printf("\n\n ************************\n\n The Circle area is: %.2f \n\n", Area);
}
int main()
{
  float radius;
  ReadRadius(radius);
  PrintResult(calculateCircleAreaByRadius(radius));
}
