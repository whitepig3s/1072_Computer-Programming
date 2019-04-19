#include <iostream>
#include <stdlib.h>
#include <time.h>
#define N 10
using namespace std;

void fa(char x[N][N],int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            cout<<x[i][j]<<' ';
        cout<<endl;
    }
}

void fb(char x[N][N],int n,char y,int z)
{
    for (int i=0; i<z; i++)
    {
        int ax=rand()%n;
        int ay=rand()%n;
        while(x[ax][ay]!='_')
        {
            int ax=rand()%n;
            int ay=rand()%n;
        }
        x[ax][ay]=y;
    }
}

int main()
{
    srand(time(0));
    //cout<<rand()%100;
    char x [N][N]= {' '};
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
            x[i][j]='_';
    }

    fa(x,N);
    int k1,k2;
    cin>>k1>>k2;
    fb(x,N,'W',k1);
    fb(x,N,'B',k2);
    fa(x,N);

    return 0;
}
