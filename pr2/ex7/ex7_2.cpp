// recursive power of integer numbers - part 1
#include<iostream>
#include<cmath>
using namespace std;

// recursive method 1 function
int counter1 = 0;
float rm1(float a,unsigned int n)
{
  counter1++;

  if (n >= 1)
      return (a * rm1(a,n - 1));
  else
      return 1;
}

// recursive method 2 function
int counter2 = 0;
float rm2(float a, unsigned int n)
{
  counter2++;

  if(n==0)
  {
    return 1;
  }
  else if(n%2==0)
  {
    return pow(rm2(a,n/2),2);
  }
  else
  {
    return a*pow(rm2(a,n/2),2);
  }
}

int main(){
  int a;
    unsigned int n;

    cout << "Enter a number as the base: ";
    cin >> a;

    cout << "Enter a number as the power: ";
    cin >> n;

    cout << "The First Recursion Method provides the following answer : " << "(" << a << ")^(" << n << ") = " << rm1(a,n) << "; The number of recursive calls were:  " << counter1 << endl;

    cout << "The Second Recursion Method provides the following answer : " << "(" << a << ")^(" << n << ") = " << rm2(a,n) << "; The number of recursive calls were:  " << counter2 << endl;

    return 0;
}
    //For the First Recursion Method, whether the power is odd or even the number of function calls is always n + 1; As for the Second Recursion Method, when the power is odd the number of function calls is n, but when the power is even the number of function calls is always n + 1;
