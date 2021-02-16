#include <iostream>
#include<cmath>

using namespace std;

int main()
{
// NON-CONSTANT POINTER TO CONSTANT DATA
int n = 7, m = 3;
const int * ip1 = &n;
cout << "the pointer is currently poitning to " << *ip1 << endl; // DISPLAYS 7

ip1 = &m;
cout << "the pointer is currently poitning to " << *ip1 << "\n" << endl; //DISPLAYS 3

// NON-CONSTANT POINTER TO CONSTANT DATA - EX2
int* const ip2 = &n;
cout << "the pointer is currently poitning to " << *ip2 << endl; // DISPLAYS 7

*ip2 = 10;
cout << "the pointer is currently poitning to " << *ip2 << "\n" << endl; //DISPLAYS 10

// CONSTANT POINTER TO CONSTANT DATA
const int* const ip3 = &n;
cout << "the pointer is currently poitning to " << *ip3 << "\n" << endl; // DISPLAYS 10

// ip3 = &m; // would give an error
return 0;
}
 