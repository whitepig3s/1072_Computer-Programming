#include <iostream>
using namespace std;
class CMath
{
public:
    void show()
    {
        cout<<"ans="<<compute()<<endl;
    }
    virtual int compute()=0;
};

class Cadd :public CMath
{
public:
    int num1,num2;
    Cadd (int m,int n):num1(m),num2(n) {}
    int compute(void){
        return num1+num2;
    }
};
int main()
{
    Cadd a1(2,3);
    a1.show();

    return 0;
}
