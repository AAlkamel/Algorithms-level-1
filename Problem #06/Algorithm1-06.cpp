#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
  string FirstName;
  string LastName;
};

stInfo ReadInfo(){
  stInfo info;
  cout << "\n\nenter your first name.\n\n";
  cin >> info.FirstName;
  cout << "\n\nenter your last name.\n\n";
  cin >> info.LastName;
  return info;
}

string GetFullName(stInfo info, bool IsReversed){
  if(IsReversed)
    return info.LastName + " "+ info.FirstName;

  else
    return info.FirstName + " "+ info.LastName;
}

void printFullName(string FullName){
  cout << "\n\n***************************\n\n Your name is: "+ FullName+"\n" <<endl; 
}

int main()
{
  printFullName(GetFullName(ReadInfo(),false));
  return 0;
}
