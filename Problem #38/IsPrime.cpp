#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ReadPositiveNumber(string message)
{
  float num;
  do
  {
    cout << message << endl;
    cin >> num;
  } while (num <= 0);

  return num;
}
enum enPrime
{
  prime,
  notPrime
};
enPrime CheckPrime(int number)
{
  int half = round(number / 2);
  for (int i = 2; i < half; i++)
  {
    if (number % i == 0)
      return enPrime::notPrime;
  }
  return enPrime::prime;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");

    CheckPrime(ReadPositiveNumber("Please enter positive number.\n")) == enPrime::notPrime ? cout << "\n The number is not prime" : cout << "\n The number is prime";
    cout << "\n========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
