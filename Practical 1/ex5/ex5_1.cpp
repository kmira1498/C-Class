// factorial of integer given
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int x1,x2,x3; // declaration of an integer
  cout << "x1 is: ";
  cin >> x1;
  x2=1;
  x3=1;

  while (x3 <= x1)
  {
    x2 = x2 * x3;
    x3++;
  }
  cout << "Factorial of ";
  cout << x1;
  cout << " is: ";
  cout << x2;
  return 0;
}