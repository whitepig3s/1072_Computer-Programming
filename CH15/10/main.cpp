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

    CTime &operator* (const int &num)
    {
        int h=hour;
        int m=min;
        double s=sec;
        h=h*3;
        m=m*3;
        s=s*3;
        m=m+(((int)s)/60);
        h=h+(m/60);
        s=s-60*(((int)s)/60);
        m=m-60*(m/60);
        hour=h;
        min=m;
        sec=s;
        return *this;
    }
};

CTime &operator* (const int &num,CTime &obj)
    {
        return obj*num;
    }
int main()
{
    CTime t1(4,23,56.3);
    CTime t2(5,45,30.3);
    CTime t3;
    t3.set_time(1,23,45.6);

    t1.show_time();
    t2.show_time();
    t3.show_time();
    t2*3;
    t3*3;
    cout<<"¹Bºâ«á"<<endl;
    t1.show_time();
    t2.show_time();
    t3.show_time();
    return 0;
}
