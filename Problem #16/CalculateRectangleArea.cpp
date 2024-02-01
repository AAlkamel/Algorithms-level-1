#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadSideDiagonal(float &side, float &diagonal)
{
  cout << "\n\n Enter rectangle side and diagonal to calculate the rectangle area \n\n enter side.\n";
  cin >> side;
  cout << "\n\n enter diagonal.\n";
  cin >> diagonal;
}
float calculateRectangleAreaBySD(float side, float diagonal)
{
  return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}
void PrintResult(float Area)
{
  cout << "\n\n ************************\n\n The rectangle area is: "
       << Area << endl;
}
int main()
{
  float side, diagonal;
  ReadSideDiagonal(side, diagonal);
  PrintResult(calculateRectangleAreaBySD(side, diagonal));
}
