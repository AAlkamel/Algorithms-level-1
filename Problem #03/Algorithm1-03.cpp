
#include <iostream>
#include <string>
using namespace std;
enum enNumType {odd,even};
void PrintNumIsOddOrEven(enNumType NumType) {
	if (NumType == enNumType::even)
		cout << "\n\nyour number is: even \n\n"<<endl;
	else
		cout << "\n\nyour number is: Odd \n\n"<<endl;
}
enNumType checkNumType(int Num){
  if(Num%2 == 0)
		return enNumType::even;
	else
		return enNumType::odd;
}
int ReadNum(){
	int num;
	cout << "\n\nenter your number pleace.\n";
	cin >> num;
	
	return num;
}

int main()
{
	PrintNumIsOddOrEven(checkNumType(ReadNum()));
}
