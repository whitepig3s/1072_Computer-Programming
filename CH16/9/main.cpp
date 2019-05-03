#include <iostream>

using namespace std;
class Caaa
{
public:
    int num1,num2;
};

class Cbbb :public Caaa
{
    public:
    void set_num(int n1,int n2){
        num1=n1;
        num2=n2;
    }

    void show_num(void)
    {
        cout<<"num1: "<<num1<<endl;
        cout<<"num2: "<<num2<<endl;
    }
};

int main()
{
    Cbbb obj;
    obj.set_num(10,20);
    obj.show_num();
    return 0;
}
