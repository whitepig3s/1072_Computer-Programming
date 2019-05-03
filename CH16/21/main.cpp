#include <iostream>

using namespace std;
class Caaa
{
public:
    int num1,num2;
    void display(void){
    cout<<"print from Caaa class"<<endl;
    }
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
    void display(void){
    cout<<"print from Cbbb class"<<endl;
    }
};

int main()
{
    Caaa obj1;
    Cbbb obj2;
    obj1.display();
    obj2.display();
    return 0;
}
