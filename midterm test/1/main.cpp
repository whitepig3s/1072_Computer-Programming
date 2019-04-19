#include <iostream>

using namespace std;

struct time
{
    int hour,minute;
    double second;
} out,end,start= {12,30,25.5};

int main()
{
    cin>>end.hour>>end.minute>>end.second;
    if(start.second>end.second)
    {
        out.second=end.second+60-start.second;
        end.minute-=1;
    }
    else
        out.second=end.second-start.second;
    if(start.minute>end.minute)
    {
        out.minute=end.minute+60-start.minute;
        end.hour-=1;
    }
    else
        out.minute=end.minute-start.minute;
    out.hour=end.hour-end.hour;
    cout<<out.hour<<" "<<out.minute<<" "<<out.second<<endl;
    return 0;
}
