#include <iostream>

using namespace std;


int main()
{
    bool boolv =true;
    while (boolv)
    {
        int input;
        cin>>input;
        switch(input)
        {
        case 1:
            cout<<"1";
            //InitDB(InStd¡AMax);
            break;
        case 2:
            cout<<"2";
            break;
        case 3:
            cout<<"3";
            break;
        case 4:
            cout<<"4";
            break;
        case 5:
            cout<<"5";
            break;
        case 6:
            cout<<"6";
            boolv=false;
            break;
        default:
            cout<<"Please re-enter the number.";
        }
    }
    return 0;
}
