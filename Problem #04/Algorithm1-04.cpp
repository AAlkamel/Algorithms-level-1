
#include <iostream>
#include <string>
using namespace std;
struct stInfo {
int Age;
bool HasDrivingLicense;
};
stInfo ReadInfo(){
	stInfo Info;
	cout << "\n\nenter your Age pleace.\n";
	cin >> Info.Age;
	cout << "\n\nDo you have driving license 1 or 0.\n";
	cin >> Info.HasDrivingLicense;
	
	return Info;
}
bool IsAccepted(stInfo info){
	return (info.Age>21&&info.HasDrivingLicense);
}
void printResult(bool isAccepted){
	if(isAccepted)
		cout << "\n\n Hired \n\n";
	else
		cout << "\n\n rejected \n\n";

}
int main()
{
	printResult(IsAccepted(ReadInfo()));
return 0;
}
