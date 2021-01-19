#include<iostream>
using namespace std;

// definition of the swap function
void swap (int &x, int &y)
{ 
  int a;
  a = x;
  x = y;
  y = a;
}

int main()
{
  // inputs from user
  int x,y;
  cout << "Choose a value for x: ";
  cin >> x;
  cout << "Choose a value for y: ";
  cin >> y;

  // swap the values of x and y by-reference
  swap(x,y);
  
  cout << "The values will be swapped by-reference: " << "x: " << x << ", y: " << y << endl;
  return 0;
}