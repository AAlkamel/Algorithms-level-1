#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadSideHeight(float &side, float &height)
{
  cout << "\n\n Enter triangle side and height to calculate the triangle area \n\n enter side.\n";
  cin >> side;
  cout << "\n\n enter height.\n";
  cin >> height;
}
float calculateRectangleAreaBySD(float side, float height)
{
  return 0.5 * side * height;
}
void PrintResult(float Area)
{
  cout << "\n\n ************************\n\n The triangle area is: "
       << Area << endl;
}
int main()
{
  float side, height;
  ReadSideHeight(side, height);
  PrintResult(calculateRectangleAreaBySD(side, height));
}
