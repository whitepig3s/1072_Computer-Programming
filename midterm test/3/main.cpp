#include <iostream>

using namespace std;
class Cd
{
public:
    string name;
    double height;
    double weight;

    Cd(string n,double h,double w)
    {
        name=n;
        height=h;
        weight=w;
    }
    float b(void)
    {
        float r =weight/(height*height);
        return r;
    }
};

int main()
{
    Cd s1("a",1.7,60);
    //cout<<s1.name<<' '<<s1.height<<" "<<s1.weight;
    Cd s2("a",1.7,70);
    float BMI[2];
    BMI[0]=s1.b();
    BMI[1]=s2.b();

    if(BMI[0]>BMI[1])
        cout<<s1.name;
    else
        cout<<s2.name;
    return 0;
}
