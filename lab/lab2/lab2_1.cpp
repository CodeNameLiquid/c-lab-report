#include<iostream>
using namespace std;
class number
{
    private:
        int numb;
    public:
        void input()
        {
            cout<<"Enter the number"<<endl;
            cin>>numb;
            
        }
        void output()
        {
            cout<<numb<<" ";
        }
        friend void swap(number&,number&);
};
void swap(number& n1,number& n2)
{
    int temp;
    temp=n1.numb;
    n1.numb=n2.numb;
    n2.numb=temp;
}
int main()
{
    number n1,n2;
    n1.input();
    n2.input();
    swap(n1,n2);
    n1.output();
    n2.output();
    return 0;
}