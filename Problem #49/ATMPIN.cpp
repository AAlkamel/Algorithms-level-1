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
  do
  {
    PinCode = ReadPIN("\n Please enter your pin code.");
    if (PinCode == "1234")
    {
      return 1;
    }
    else
    {
      cout << "\nWrong Pin\n";
      system("color 4F");
    }

  } while (PinCode != "1234");
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
}
