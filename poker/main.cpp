#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
void InitPoker (int card_I [],int n)
{
    for (int i=0;i<52;i++)
        card_I[i]=n;
}

void Shuffle(int card_f [],int n)
{
    rand ���@�Ӧ�m
    ��m--
    ���ʺA�O���餤
    �����ܦ�0


}

int main()
{
    srand(time(0));
    int card[52]={0};
    cout<<"Please enter the number of poker: "
    int input=0;    //poker �ƶq
    cin>>input;
    InitPoker(card,n);

    for (int i=1; i<52; i++)
    {
        cout<<card[i]<<" ";
    }

    //�s�W�ʺA�O����}�C
    Shuffle()




    /*cout<<"after"<<endl;
    for (int i =0;i<=500;i++)
    {
        int a1=randnbi()+1,a2=randnbj()+1,b1=randnbi()+1,b2=randnbj()+1;

        int tmp=0;
        tmp=p[a1][a2];
        p[a1][a2]=p[b1][b2];
        p[b1][b2]=tmp;

    }
        for (int i=1; i<=4; i++)
    {
        for(int j=1; j<14; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }*/


    return 0;
}
