#include <iostream>
using namespace std;
void display_list(void);

class Agri
{
private:
    float temperature,humidity;
    int OnOff;
    short image[6];

public:
    Agri ()
    {
        temperature=0;
        humidity=0;
        OnOff=0;
        for (int i=0; i<=6; i++)
            image[i]=0;
    }

    void InitAll()
    {
        temperature=0;
        humidity=0;
        OnOff=0;
        for (int i=0; i<=6; i++)
            image[i]=0;
        cout<<"finished!"<<endl;
    }

    int ReadTemp()
    {
        float t;
        cout<<"Please enter the temperature: ";
        cin>>t;
        if(t>0&&t<100)
        {
            temperature=t;
            return 0;
        }
        else
            return -1;
    }

    int ReadHumidity(void)
    {
        float h;
        cout<<"Please enter the humidity: ";
        cin>>h;
        if(h>0&&h<100)
        {
            humidity=h;
            return 0;
        }
        else
            return -1;
    }

    int ReadCamera()
    {
        short temp;
        cout<<"Please the numbers.: ";
        for (int i=0; i<6; i++)
        {
            cin>>hex>>temp;
            if (temp>=0)
            {
                image[i]=temp;
            }
            else
                return -1;
        }
        return 0;
    }

    void TurnOnOff(int control)
    {
        OnOff=control;
    }

    void ShowAll()
    {
        cout<<"temperature:"<<temperature<<"‘ª"<<endl;
        cout<<"humidity:"<<humidity<<'%'<<endl;
        cout<<"OnOff:"<<OnOff<<endl;
        cout<<"Image:";
        for (int i=0; i<6; i++)
        {
            cout<<hex<<image[i]<<" ";
        }
            cout<<endl;
    }
};

int main()
{
    Agri farm1;
    int input;
    bool bool_value =true;
    while (bool_value)
    {
        display_list();
        cin>>input;
        cout<<endl;
        switch(input)
        {
        case 1:
            farm1.InitAll();
            break;
        case 2:
        {
            int success =farm1.ReadTemp();
            if(success==0)
                cout<<"succeed"<<endl;
            else
                cout<<"failed"<<endl;
            break;
        }
        case 3:
        {
            int success =farm1.ReadHumidity();
            if(success==0)
                cout<<"succeed"<<endl;
            else
                cout<<"failed"<<endl;
            break;
        }
        case 4:
        {
            int OnOff;
            cout<<"Please enter 0 or 1 :";
            cin>>OnOff;
            if (OnOff==1||OnOff==0){
                farm1.TurnOnOff(OnOff);
                cout<<"succeed";
            }
            else
                cout<<"failed";
            break;
        }
        case 5:
        {
            int success =farm1.ReadCamera();
            if(success==0)
                cout<<"succeed"<<endl;
            else
                cout<<"failed"<<endl;
            break;
        }
        case 6:
            farm1.ShowAll();
            break;
        case 7:
            bool_value=false;
            break;
        default:
            cout<<"Please re-enter the number.";
            break;
        }
    }
    return 0;
}

void display_list(void)
{
    cout<<"1. ²£¥Í¤@¹A³õªÅ¸ê®Æ(ªì©l¤Æ)"<<endl;
    cout<<"2. Åª¨ú·Å«×"<<endl;
    cout<<"3. Åª¨úÀã«×"<<endl;
    cout<<"4. Åx¤ô¶}Ãö"<<endl;
    cout<<"5. Åª¨ú¼v¹³"<<endl;
    cout<<"6. Åã¥Ü©Ò¦³¸ê®Æ"<<endl;
    cout<<"7. exit"<<endl;
    cout<<"Please enter the number: ";
}

