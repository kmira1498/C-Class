// factorial of integer given
#include<iostream>
#include<cmath>
using namespace std;

bool pic (int h, int k, int r, int x, int y)
{ 
  return (x-h)^2+(y-k)^2 == r^2;
}

int main()
{
  int h,k,r,x,y;
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

  bool answer;
  answer = pic(h,k,r,x,y);

  if (answer == true)
    cout << "The point (" << x << ", " << y << ") is in the circle!" << endl; 
  else
    cout << "The point (" << x << ", " << y << ") is not in the circle!" << endl;
  return 0;
}