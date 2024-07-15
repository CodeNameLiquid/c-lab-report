#include<iostream>
using namespace std;
class rupee
{   
    private:
        float integer;
    public:
        rupee(float r)
        {
            integer=r;
        }
        void input()
        {
            cout<<"Enter the value"<<endl;
            cin>>integer;
        }
        void output()
        {
            cout<<"The converted currency is : "<<integer<<" $"<<endl;
        }
        void convert()
        {
            integer=integer*(1/98.51);
        }
};
int main()
{
    rupee r(98.51);
    r.convert();
    r.output();
    return 0;
}