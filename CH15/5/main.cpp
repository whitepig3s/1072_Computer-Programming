#include <iostream>

using namespace std;
class CTime
{
private:
    int hour,min;
    double sec;

public:
    CTime(int h=6,int m=30,double s=30.0):hour(h),min(m),sec(s) {}
    void show_time()
    {
        cout<<hour<<"hr "<<min<<"min "<<sec<<"sec"<<endl;
    }
    void set_time (int h,int m,double s)
    {
        hour=h;
        min=m;
        sec=s;
    }
    int operator> (CTime &obj)
    {
        if (hour==obj.hour)
        {
            if (min==obj.min)
            {
                return(sec>obj.sec);
            }
            else
                return(min>obj.min);
        }
        else
            return(hour>obj.hour);
    }
};
int main()
{
    CTime t1(4,23,56.3);
    CTime t2(5,45,30.3);
    CTime t3;
    t3.set_time(1,23,45.6);

    t1.show_time();
    t2.show_time();
    t3.show_time();
    if (t1>t3)
        cout<<"t1>t3"<<endl;
    else
        cout<<"t1<=t3"<<endl;
    return 0;
}
