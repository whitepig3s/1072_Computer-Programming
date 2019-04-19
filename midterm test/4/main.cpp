#include <iostream>
#include <algorithm>
using namespace std;
float g1 (float x,float y,float z)
{
    float s[3];
    s[0]=x;
    s[1]=y;
    s[2]=z;
    sort(s,s+3);
    return s[0]*s[0];
}
void g3 (float x,float y,float z)
{
    float s[3];
    s[0]=x;
    s[1]=y;
    s[2]=z;
    sort(s,s+3);
    if ((s[0]+s[1]>s[2])&&s[2]-s[1]<s[0])
    {
        for (int i=0; i<3; i++)
            s[i]=s[i]*s[i];
        if (s[0]+s[1]==s[2])
            cout<<"C"<<endl;
        else if (s[0]+s[1]>s[2])
            cout<<"B"<<endl;
        else if (s[0]+s[1]<s[2])
            cout<<"A"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
int main()
{
    float x,y,z,sq;
    cin>>x>>y>>z;
    sq=g1(x,y,z);
    cout<<"最小值的平方"<<sq<<endl;
    g3(x,y,z);
    return 0;
}
