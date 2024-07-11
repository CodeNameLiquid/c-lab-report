#include<iostream>
using namespace std;
class Employee
{
    int emp_num;
    float basic,daily_allow ,net_sal,income_tax,gross_sal;
    char name[50];
    public:
        void get_info()
        {
            cout<<"Enter the employee number"<<endl;
            cin>>emp_num;
            cout<<"Enter the employee name"<<endl;
            cin>>name;
            cout<<"Enter the basic salary"<<endl<<endl;
            cin>>basic;
        }
        void calculate()
        {
            daily_allow=0.52*basic;
            gross_sal=basic+daily_allow;
            income_tax=0.3*gross_sal;
            net_sal=gross_sal-income_tax;
        }
        void print_info()
        {
            cout<<name<<" "<<emp_num<<endl;
            cout<<"Basic salary = "<<basic<<endl<<"DA = "<<daily_allow<<endl<<"gross salary = "<<gross_sal<<endl<<"income tax = "<<income_tax<<endl<<"net salary = "<<net_sal<<endl<<endl;
        }
};
int main()
{
    int size;
    cout<<"enter the number of employees"<<endl;
    cin>>size;
    Employee *e = new Employee[size];
    for(int i=0;i<size;i++)
    {
        e[i].get_info();
        e[i].calculate();
    }
    for(int i=0;i<size;i++)
    {
        e[i].print_info();
    }
    return 0;
}