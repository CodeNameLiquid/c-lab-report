#include<iostream>
using namespace std;
class time
{
    int hour,min,sec;
    public:
        time()
        {
            hour=0;
            min=0;
            sec=0;
        }
        friend istream& operator >>(istream& ci,time& t)
        {
            ci>>t.hour>>t.min>>t.sec;
        }
        friend ostream& operator <<(ostream& co,time& t)
        {
            co<<t.hour<<" :: "<<t.min<<" :: "<<t.sec;
        }

};
int main()
{
    time t;
    cin>>t;
    cout<<t;
    return 0;
}