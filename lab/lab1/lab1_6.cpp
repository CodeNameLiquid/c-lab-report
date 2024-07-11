#include<iostream>
using namespace std;
class number
{
    private:
        float a,b;
    public:
        void get_info()
        {
            cin>>a>>b;
        }
        friend float add(number);
};
float add (number n)
{
    return n.a+n.b;
}
int main()
{
    number n;
    cout<<"Enter the two numbers"<<endl;
    n.get_info();
    cout<<"The sum is "<<add(n);
    return 0;
}