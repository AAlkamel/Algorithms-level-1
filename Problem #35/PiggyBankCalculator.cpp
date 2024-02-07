#include <iostream>
#include <string>
using namespace std;
struct stPiggyBankContent
{
  int Penny, Nickel, Dime, Quarter, Dollar;
};
stPiggyBankContent ReadPiggyBankContent()
{
  stPiggyBankContent content;
  cout << "Please enter number of pennies.\n";
  cin >> content.Penny;
  cout << "Please enter number of nickels.\n";
  cin >> content.Nickel;
  cout << "Please enter number of dimes.\n";
  cin >> content.Dime;
  cout << "Please enter number of quarters.\n";
  cin >> content.Quarter;
  cout << "Please enter number of dollars.\n";
  cin >> content.Dollar;
  return content;
}
int CalculateTotalPennies(stPiggyBankContent content)
{
  return content.Penny + content.Nickel * 5 + content.Dime * 10 + content.Quarter * 25 + content.Dollar * 100;
}
int main()
{
  char again = 'y';
  do
  {
    system("cls");
    stPiggyBankContent PiggyBankContent = ReadPiggyBankContent();
    int pennies = CalculateTotalPennies(PiggyBankContent);
    cout << "\n Total pennies: " << pennies << "\n";
    cout << "\n Total dollars: " << (float)pennies / 100 << endl;
    cout << "========================\n\ndo this again yes or no [y/n] \n\n";
    cin >> again;
  } while (again == 'y' || again == 'Y');
}
