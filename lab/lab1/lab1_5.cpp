#include<iostream>
#include<string.h>
using namespace std;
class employee
{
    char name[100],des[100];
    static int tcount,ecount,dcount;
    public:
        void get_info()
        {
            cout<<"enter the name and designation"<<endl;
            cin>>name>>des;
        }
        void check()
        {
            if(strcmp("teacher",des)==0)
            {
                tcount++;
            }
            else if(strcmp("engineer",des)==0)
            {
                ecount++;
            }
            else if(strcmp("doctor",des)==0)
            {
                dcount++;
            }
            else
            {
                cout<<"Invalid input"<<endl;
            }
        }
        void print_info()
        {
            cout<<"Total number of teacher is  "<<tcount<<endl<<"Total number of engineer is "<<ecount<<endl<<"Total number of doctor is"<<dcount<<endl;
        }
};
int employee::tcount = 0;
int employee::ecount = 0;
int employee::dcount = 0;
int main()
{
    cout<<"Enter the number of employees"<<endl;
    int size;
    cin>>size;
    employee *e =new employee[size];
    for(int i=0;i<size;i++)
    {
        e[i].get_info();
        e[i].check();
    }
    e[0].print_info();
    cout<<"Total employees = "<<size<<endl;
    return 0;
}