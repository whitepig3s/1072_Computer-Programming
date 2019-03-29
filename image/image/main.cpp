#include <iostream>
using namespace std;
void display_list(void);

class Image
{
private:
    bool color_class;
    int color;
    int *ptra;

public:
    Image(int k)
    {
        color_class=1;
        color=1;
        ptra=new int [6];
        for(int i=0; i<6; i++)
            *(ptra+i)=k;
        cout<<"Succeed"<<endl;
    }

    Image(int b1,int b2)
    {

        cout<<"Succeed"<<endl;
    }

    Image(int r,int g,int b)
    {

        cout<<"Succeed"<<endl;
    }

    void Show()
    {
        if (color_class==0)
            cout<<"Class of color: Black and white picture"<<endl;
        else
        {
            cout<<"Class of color: Color picture."<<endl;
            switch(color)
            {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            }


        }
    }
};

int main()
{
    Image gcc;
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
            //Image;
            break;
        case 2:
        {
            Image picture(2);

            break;
        }
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:
            bool_value=false;
            break;
        default:
            cout<<"Please re-enter the number.";
            break;
        }
    }
    return 0;
}
void display_list()
{
    cout<<"1. "<<endl;
    cout<<"2. "<<endl;
    cout<<"3. "<<endl;
    cout<<"4. "<<endl;
    cout<<"5. "<<endl;
    cout<<"6. exit"<<endl;
    cout<<"Please enter the number: ";
}
