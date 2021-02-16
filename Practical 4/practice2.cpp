#include <iostream>
#include<cmath>

using namespace std;

int main()
{
int *ip , iv []={0,1,2,3,4,5,6,7,8,9}; 
ip=iv; // let pointer point to vector 
cout << *ip << "␣"; // displays 0 
ip++; // increment pointer
cout << *ip << "␣"; // displays 1 
ip+=3; // add 3 to pointer
cout << *ip << "␣"; // displays 4 
ip--; // decrement pointer
cout << *ip << "␣"; // displays 3 
ip-=-2; // subtract 2 from pointer 
cout << *ip << "␣"; // displays 5 
return 0;
}
 