
#include <iostream>
#include <string>
using namespace std;

void PrintName(string name) {
	cout << "\n\nyour name is: " + name +"\n\n"<<endl;
}
string ReadName(){
	string name;
	cout << "\n\nenter your name pleace.\n";
	// cin >> name;
	getline(cin,name);
	return name;
}
int main()
{
	PrintName(ReadName());
}
