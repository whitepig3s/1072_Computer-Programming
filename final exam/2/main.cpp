#include <iostream>

using namespace std;

void fa(string z)
{
    int siz;
    siz=z.size();
    for (int i=siz-1; i>=0; i--)
        cout<<z[i];
    cout<<endl;
}
void fb (string z)
{
    int siz=z.size();
    for (int i=0; i<siz; i++)
    {
        if (z[i]>='a'&&z[i]<='z')
            z[i]=z[i]-'a'+'A';
        else if (z[i]>='A'&&z[i]<='Z')
            z[i]=z[i]-'A'+'a';
    }
}
void fc (string z1,string z2)
{
    int count =0;
    double fin=z1.find(z2);
    while(fin<100000)
    {
        z1.erase(fin,fin+z2.size());

        fin=z1.find(z2);
        cout<<z1<<endl;
        count++;
    }

    cout<<count<<endl;
}
int main()
{
    string x,y;
    cin>>x>>y;
    //fa(x);
    fc(x,y);


    return 0;
}
