#include <iostream>
using namespace std;

#define MAX 10
void display_list(void);
void InitDB(struct database stu[]);
int InsertDB(struct database stu[],int *n,struct database AddedStd);
int DeleteDB(struct database stu[],int *n,int k);
void ShowDB(struct database stu[MAX],int *n);
//QueryDB(struct database stu[],n,QueryName);

struct database
{
    string Name;
    char Sex;
    int Math;
};

int main()
{
    int input;
    bool bool_value =true;
    database student[MAX];

    int flag=0;

    while (bool_value)
    {
        display_list();
        cin>>input;
        switch(input)
        {
        case 1:
            InitDB(student);
            break;
        case 2:
        {
            cout<<"Please enter the data."<<endl;
            database temp;
            cout<<"Name: ";
            cin>>temp.Name;
            cout<<"Sex: ";
            cin>>temp.Sex;
            cout<<"Math: ";
            cin>>temp.Math;
            int success =InsertDB(student,&flag,temp);
            if (success==0)
                cout<<"succeed"<<endl;
            else
                cout<<"failed"<<endl;
            break;
        }
        case 3:
        {
        cout<<"Please enter the number that you want to delete."<<endl;
        int num;
        cin>>num;
        int DeleteDB(struct database stu[],int *n,int k);

        }
            break;
        case 4:
            cout<<"4"<<endl;
            break;
        case 5:
            ShowDB(student,&flag);
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
    cout<<"Please enter the number: "<<endl;
}

void InitDB(struct database stu[])
{
    for (int i=0; i<MAX; i++)
    {
        stu[i].Name=" ";
        stu[i].Sex='Q';
        stu[i].Math=0;
    }
}

int InsertDB(struct database stu[],int *n,struct database AddedStd)
{
    int number=*n;
    if(number>=0&&number<MAX)
    {
        stu[number].Name=AddedStd.Name;
        stu[number].Sex=AddedStd.Sex;
        stu[number].Math=AddedStd.Math;
        *n=*n+1;
        return 0;
    }
    else
        return 1;
}

void ShowDB(struct database stu[MAX],int *n)
{
    cout<<"No  Name  Sex  Math"<<endl;
    for (int i=0; i<*n; i++)
        cout<<i+1<<" "<<stu[i].Name<<" "<<stu[i].Sex<<" "<<stu[i].Math<<endl;
}

