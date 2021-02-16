#include "date.cpp" //includes date file

class Blood
{
    public:
        int sys;
        int dias;
        int day;
        int month;
        int year;
    public:
        Blood(int s, int di,Date dat)
        {
            sys = s;
            dias = di;
            day = dat.day;
            month = dat.month;
            year = dat.year;
        }
};
