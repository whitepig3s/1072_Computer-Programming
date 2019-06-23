#include <iostream>

using namespace std;
class Cc
{
protected:
    int x;
public:
    string y;
     Cc (int ix=0,string  iy="A")
    {
        x=ix;
        y=iy;
    }
     void show(){
    cout<<"x="<<x<<" y="<<y<<endl;
    }
};

class Dd :public Cc{
    public:
    char z;
    Dd (int ix,string  iy,char iz):Cc (ix,iy),z(iz)
    {
    }
     void show(){
      Cc::show();
    cout<<"z="<<z;
    }

};


int main()
{
    Cc obj1(1,"dfg");
    obj1.show();
    Dd obj2(2,"drj",'g');
    obj2.show();
    return 0;
}
