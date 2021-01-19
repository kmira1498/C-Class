// recursive power of integer numbers - part 1
#include <iostream>
using namespace std;

int powercalc (int, int);

int main()
{
    int a, n, answer;

    cout << "Power Calculator!" << endl;
    cout << "Enter a number as the base: ";
    cin >> a;

    cout << "Enter a number as the power:";
    cin >> n;

    answer = powercalc(a, n);
    cout << "Therefore: ("<< a << ")^(" << n << ") = " << answer;

    return 0;
}

int powercalc (int a, int n)
{
    if (n >= 1)
        return (a * powercalc(a,n - 1));
    else
        return 1;
}