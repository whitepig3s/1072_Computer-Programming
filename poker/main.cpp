#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
void InitPoker (int card_I [],int n)
{
    for (int i=0;i<52;i++)
        card_I[i]=n;
}

void Shuffle(int card_I [],int *card_f,int n) //洗牌
{
    for (int i=0;i<n;i++)
    {
        int tmp;
        do
        {
          tmp=rand()%52;

        }while(card_I [tmp]!=0);
        card_I [tmp]--;
        card_f[i]=tmp;
    }
}

/*ShowAll(card,n,k)
{



}*/

void ShowOne (int n)
{
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
    int card[52]={0};
    cout<<"Please enter the number of poker: ";
    int input=0;    //poker 數量
    cin>>input;
    int cardmount=input*52;
    InitPoker(card,input); //初始化 (確定有幾副牌)


    int *card_ptr;
    card_ptr=new int[cardmount];
    Shuffle(card,card_ptr,cardmount);

    for (int i=1; i<cardmount; i++)
    {
        cout<<card_ptr[i]<<" ";
    }

    delete[] card_ptr;
    card_ptr =NULL;
    return 0;
}
