#include <iostream>
#include <string>
using namespace std;
enum enPassFail
{
  pass,
  fail
};
int readMark()
{
  int num;
  cout << "\n\nenter your mark.\n\n";
  cin >> num;
  return num;
}
enPassFail checkMark(int mark)
{
  if (mark >= 50)
    return enPassFail::pass;
  else
    return enPassFail::fail;
}
void printResult(int mark)
{
  cout << "\n\n************************\n\n";
  if (checkMark(mark) == enPassFail::pass)
    cout << "==== Pass ====\n"
         << endl;
  else
    cout << "==== Fail ====\n"
         << endl;
}
int main()
{
  printResult(readMark());
  return 0;
}
