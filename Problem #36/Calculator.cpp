#include <iostream>
#include <string>
using namespace std;
enum enOperationTypes
{
  Add = '+',
  Subtract = '-',
  Multiplation = '*',
  division = '/'
};
int ReadNumber(string message)
{
  float num;
  cout << message << endl;
  cin >> num;
  return num;
}
enOperationTypes ReadType()
{
  char OT = '+';
  cout << "Please enter operation type [ +, -, *, / ]\n";
  cin >> OT;
  return (enOperationTypes)OT;
}
float Calculate(float number_1, float number_2, enOperationTypes type)
{
  switch (type)
  {
  case enOperationTypes::Add:
    return number_1 + number_2;
    break;
  case enOperationTypes::Subtract:
    return number_1 - number_2;
    break;
  case enOperationTypes::Multiplation:
    return number_1 * number_2;
    break;
  case enOperationTypes::division:
    return number_1 / number_2;
    break;
  default:
    return number_1 + number_2;
    break;
  }
}

int main()
{
  char again = 'y';
  do
  {
    system("cls");
    float number_1 = ReadNumber("Pleas enter the first number");
    float number_2 = ReadNumber("Pleas enter the second number");
    enOperationTypes type = ReadType();
    cout << "\n Result: " << Calculate(number_1, number_2, type) << endl;
    cout << "========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
