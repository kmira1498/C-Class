// is a given point enclosed in a given circle?
#include<iostream>
#include<cmath>
using namespace std;

bool in_circle (double h, double k, double r, double x, int y) // function used to determine if a given point is in a given circle
{ 
  return pow((x-h),2)+pow((y-k),2) < r*r;
}

int main()
{
  double h,k,r,x,y; // inputs from user for given point and circle
  cout << "The center of a circle is (h,k): " << endl;
  cout << "h: ";
  cin >> h;
  cout << "k: ";
  cin >> k;
  cout << "The radius of this circle is: ";
  cin >> r;
  cout << "The coordinates of a point (x,y): " << endl;
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;

  bool answer; // assigning a variable to result boolean result of function in_circle
  answer = in_circle(h,k,r,x,y);

  if (answer == true) // display answer
    cout << "The point (" << x << ", " << y << ") is in the circle!" << endl; 
  else
    cout << "The point (" << x << ", " << y << ") is not in the circle!" << endl;
  return 0;
}