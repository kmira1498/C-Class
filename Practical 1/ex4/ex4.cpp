// print a number of *'s depending on integer given
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int x1; // declaration of an integer
  cout << "x1 is: ";
  cin >> x1;
  
  while (x1 > 0){
    cout << "*";
    x1 = x1 - 1;
  }
  return 0;
}