#include <iostream>
#include <string>
#include <fstream>
#define Maxinum 10
using namespace std;
void display_list();
class TelBook
{
private:
    string Name[Maxinum];
    string Mobile[Maxinum];
public:
    static int count;
    void Show(void)
    {
        cout<<"Number Name Phone_number"<<endl;
        for(int i=0; i<count; i++)
            cout<<i<<" "<<Name[i]<<" "<<Mobile[i]<<endl;
    }
    void Clear(void)
    {
        for(int i=0; i<count; i++)
        {
            Mobile[i]=" ";
            Name[i]=" ";
        }
        count=0;
        cout<<"Success"<<endl;
    }
    void Insert(void)
    {
        cout<<"Please enter the name:";
        cin>>Name[count];
        cout<<endl<<"Please enter the phone number:";
        cin>>Mobile[count];
        count++;
    }
    int Delete(int k)
    {
        if (k>=0&&k<=count)
        {
            Name[k]=" ";
            Mobile[k]=" ";
            for (int i=k; i<count; i++)
            {
                Name[i]=Name[i+1];
                Mobile[i]=Mobile[i+1];
            }
            count--;
            return 0;
        }
        else
            return -1;
    }
    void write_file(void)
    {
        fstream file("phone_book.txt",ios::out);
        if (file.is_open())
        {
            file<<"Number Name Phone_number"<<endl;
            for(int i=0; i<count; i++)
            {
                file<<i<<" "<<Name[i]<<" "<<Mobile[i]<<endl;
            }
            cout<<"Success"<<endl;
        }
        else
            cout<<"fail";
        file.close();
    }
};
int TelBook::count=0;

int main()
{
    int input;
    bool bool_value =true;
    TelBook book;
    while (bool_value)
    {
        display_list();
        cin>>input;
        cout<<endl;
        switch(input)
        {
        case 1:
            book.Clear();
            break;
        case 2:
            book.Insert();
            break;
        case 3:
        {
            cout<<"Please enter the number that you want to delete."<<endl;
            int num;
            cin>>num;
            int success = book.Delete(num);
            if (success==0)
                cout<<"succeed"<<endl;
            else
                cout<<"failed"<<endl;
            break;
        }
        case 4:
            book.Show();
            break;
        case 5:  //read file
        {


            break;
        }
        case 6:  //write
        {
            book.write_file();
            break;
        }
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
void display_list()
{
    cout<<"1. Clear data"<<endl;
    cout<<"2. New"<<endl;
    cout<<"3. Delete"<<endl;
    cout<<"4. Show data"<<endl;
    cout<<"5. Read data from file"<<endl;
    cout<<"6. Write data to file"<<endl;
    cout<<"7. exit"<<endl;
    cout<<"Please enter the number: ";
}
