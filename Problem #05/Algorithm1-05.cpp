
#include <iostream>
#include <string>
using namespace std;
struct stInfo {
int Age;
bool HasDrivingLicense;
bool HasRecomandation;
};
stInfo ReadInfo(){
	stInfo Info;
	cout << "\n\nenter your Age pleace.\n";
	cin >> Info.Age;
	cout << "\n\nDo you have driving license 1 or 0.\n";
	cin >> Info.HasDrivingLicense;
	cout << "\n\nDo you have recomandation 1 or 0.\n";
	cin >> Info.HasRecomandation;
	
	return Info;
}
bool IsAccepted(stInfo info){
	if(info.HasRecomandation)
		return true;
	else
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
