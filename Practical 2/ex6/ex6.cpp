// recursive Fibonacci
#include <iostream>
using namespace std;

long calls;
long F(long n)
{
  calls ++;
  if (n <= 1)
    return 1;
  else
    return F(n-1) + F(n-2);
}

int main()
{
  long i,c,d,num;

  cout << "For which n, would you like to see the n-th number in the Fibonacci sequence: ";
  cin >> num;

  for (i = 0; i < num; i++){
    calls = 0;
    d=F(i);
    c=calls;
    cout<< "For, i = " << i << ", the " << i + 1 << "-th number in the Fibonacci sequence is, F(i) = "<< d << ". The number of recursive calls needed = " << c << endl;
  
  }
  return 0;
}