#include <iostream>

using namespace std;

struct date
{
    int year;
    int month;
    int day;
};
int main()
{
    date start;
    start.year=2019;
    start.month=6;
    start.day=13;
    date end;
    cin>>end.year>>end.month>>end.day;
//cout<<endl<<end.year<<" "<<end.month<<" "<<end.day;
    date result;
    if (end.day<start.day)
    {
        if (end.month%2==0)
            {
                end.day=end.day+31;
                end.month=end.month-1;
                result.day=end.day-start.day;
            }
            else
            {
                end.day=end.day+30;
                end.month=end.month-1;
                result.day=end.day-start.day;
            }
        if (end.month>=start.month)
        {
        result.month=end.month-start.month;
        }
        else
        {
            end.month=end.month+12;
            end.year=end.year-1;
            result.month=end.month-start.month;
        }
    }
    else
    {
        result.day=end.day-start.day;

        if (end.month>=start.month)
        {
        result.month=end.month-start.month;
        }
        else
        {
            end.month=end.month+12;
            end.year=end.year-1;
            result.month=end.month-start.month;
        }

    }
    result.year=end.year-start.year;
    cout<<result.year<<" "<<result.month<<" "<<result.day;
    return 0;
}
