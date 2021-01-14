// is the first # a multiple of the second #
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int x1, x2; // declaration of two integers
  cout << "x1 is: ";
  cin >> x1;
  cout << "x2 is: ";
  cin >> x2;
  cout << "Is x1 a multiple of x2?: ";
  if (x2 % x1 == 0)
    cout << "Yes";
  else {
    cout << "No";
  }
  return 0;
}