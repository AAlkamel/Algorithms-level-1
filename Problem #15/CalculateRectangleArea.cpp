#include <iostream>
#include <string>
using namespace std;

void ReadWidthHeight(float &width, float &height)
{
  cout << "\n\n Enter rectangle width and height to calculate the rectangle area \n\n enter Width.\n";
  cin >> width;
  cout << "\n\n enter height.\n";
  cin >> height;
}
float calculateRectangleAreaByWH(float width, float height)
{
  return width * height;
}
void PrintResult(float Area)
{
  cout << "\n\n ************************\n\n The rectangle area is: "
       << Area << endl;
}
int main()
{
  float width, height;
  ReadWidthHeight(width, height);
  PrintResult(calculateRectangleAreaByWH(width, height));
}
