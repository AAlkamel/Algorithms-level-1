#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadDiameter(float &diameter)
{
  cout << "\n\n Enter Circle diameter to calculate the Circle area \n\n enter diameter.\n";
  cin >> diameter;
}
float calculateCircleAreaByDiameter(float diameter)
{
  float pi = (float)22 / 7;
  return (float)(pi * pow(diameter, 2)) / 4;
}
void PrintResult(float Area)
{
  printf("\n\n ************************\n\n The Circle area is: %.2f \n\n", Area);
}
int main()
{
  float diameter;
  ReadDiameter(diameter);
  PrintResult(calculateCircleAreaByDiameter(diameter));
}
