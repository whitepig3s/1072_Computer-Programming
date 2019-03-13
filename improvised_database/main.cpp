#include <iostream>
using namespace std;
void display_list(void);
void InitDB(InStd¡AMax);
//int InsertDB(InStd，n，AddedStd);
//DeleteDB(InStd，n，k);
//QueryDB(InStd，n，QueryName);

//struct st
int main()
{
    int input;
    bool bool_value =true;
    while (bool_value)
    {
        display_list();
        cin>>input;
        switch(input)
        {
        case 1:
            cout<<"1"<<endl;
            InitDB(InStd¡AMax);
            break;
        case 2:
            cout<<"2"<<endl;
            break;
        case 3:
            cout<<"3"<<endl;
            break;
        case 4:
            cout<<"4"<<endl;
            break;
        case 5:
            cout<<"5"<<endl;
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

void display_list(void)
{
    cout<<"1. Initial (clear) database."<<endl;
    cout<<"2. Add student."<<endl;
    cout<<"3. Delete student."<<endl;
    cout<<"4. Display all student information. "<<endl;
    cout<<"5. Search student by name."<<endl;
    cout<<"6. exit"<<endl;
    cout<<"Please enter the number: ";
}

//InitDB(InStd¡AMax);{}

