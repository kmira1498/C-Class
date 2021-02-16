#include <iostream>
using namespace std;

class Date
{
    public:
        int day;
        int month;
        int year;
    public:
        Date(){};
        Date(int d,int m,int y)
        {
          day = d; month = m; year = y;
        }
};
