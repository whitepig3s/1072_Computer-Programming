#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
void InitPoker (int card_I [],int n)
{
    for (int i=0; i<52; i++)
        card_I[i]=n;
}

void Shuffle(int card_I [],int *card_f,int n) //洗牌
{
    for (int i=0; i<n; i++)
    {
        int tmp;
        do
        {
            tmp=rand()%52;
        }
        while(card_I [tmp]<=0);
        card_I [tmp]--;
        card_f[i]=tmp;
    }
}

void ShowAll(int *card_ptr,int n,int k)
{

    for (int i=0;i<k;i++)
    {
        for(int j=0;j<(n/k);j++)
        {
            cout<<card_ptr[i*4+j]<<' ';
        }
        cout<<endl;
    }
}

void ShowOne (int n){
    if (n<=0&&n<=12)
    {
        cout<<"黑桃"<<n+1;
    }
    else if(n<=13&&n<=25)
    {
        cout<<"紅心"<<n-12;
    }
    else if(n<=26&&n<=38)
    {
        cout<<"紅磚"<<n-24;
    }
    else if(n<=39&&n<=51)
    {
        cout<<"梅花"<<n-36;
    }
}

int main()
{
    srand(time(0));
    int card[52]= {0};
    cout<<"Please enter the number of poker: ";
    int input=0;    //poker 數量
    cin>>input;
    int cardmount=input*52;
    InitPoker(card,input); //初始化 (確定有幾副牌)

    int *card_ptr;
    card_ptr=new int[cardmount];
    Shuffle(card,card_ptr,cardmount);

    int table[4][5]= {0};

    //------ 發牌 ------
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            table[j][i]=card_ptr[i*4+j];
        }
    }
    /* //print cardptr
    cout<<"ptr"<<endl;
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<card_ptr[i*4+j]<<' ';
        }
        cout<<endl;
    }*/
    //-----------


    //---------- print table ----------
    cout<<"A B C D"<<endl;
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<table[j][i]<<' ';
        }
        cout<<endl;
    }
    //------------------


    //-------- sum ---------
    for (int i=0;i<4;i++)
        for (int j=0;j<4;j++)
            table[i][4]= table[i][4]+ table[i][j];
    //------------------


    //---------- result ----------
    int flag=-1,max=0;
    for (int i=0; i<=3; i++)
    {
        if (max<table[i][4])
        {
            flag=i;
            max=table[i][4];
        }
    }
    cout<<"Winner:";
    switch(flag)
    {
    case 0:
        cout<<'A';
        break;
    case 1:
        cout<<'B';
        break;
    case 2:
        cout<<'C';
        break;
    case 3:
        cout<<'D';
        break;
    }
    //------------------


    delete[] card_ptr;
    card_ptr =NULL;
    return 0;
}
