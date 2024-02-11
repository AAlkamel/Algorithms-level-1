#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string ReadPIN(string message)
{
  string PinCode;
  cout << message << endl;
  cin >> PinCode;

  return PinCode;
}
bool Login()
{
  string PinCode;
  short counter = 3;
  do
  {
    counter--;
    PinCode = ReadPIN("\n Please enter your pin code.");
    if (PinCode == "1234")
    {
      return 1;
    }
    else
    {
      cout << "\nWrong Pin\n you have " << counter << " more tries";
      system("color 4F");
    }

  } while (PinCode != "1234" && counter > 0);
  return 0;
}
int main()
{
  if (Login())
  {
    int close;
    system("color 2F");
    cout << "\nYour Account balance is: " << 7500 << endl;
    cout << "\nEnter eny thing to close " << endl;
    cin >> close;
  }
  else
  {
    int close;

    cout << "\nYour Card blocked call the bank for help!" << endl;
    cout << "\nEnter eny thing to close " << endl;
    cin >> close;
  }
}
