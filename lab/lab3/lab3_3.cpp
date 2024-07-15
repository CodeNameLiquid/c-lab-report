#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class times
{
    float hour,min,sec,format;
    public:
        void input()
        {
            cout<<"enter the time"<<endl;
            cin>>hour>>min>>sec;
            cout<<"0->converts to 12 hour format"<<endl<<"1->converts to 25 hour format"<<endl;
            cin>>format;

        }
        void output()
        {
            if(format==0)
            {
                cout<<"The time is : "<<hour<<" : "<<min<<" : "<<sec<<endl;
            }
            else if (format==1)
            {
                cout<<"The time is : "<<hour<<" : "<<min<<" : "<<sec<<" "<<get_suffix(hour)<<endl;
            }
        }
        void convert()
        {
            if(format==0)
            {
                hour=hour-floor(hour/12)*12;
                format=1;
            }
            else
            {
                if(strcmp(get_suffix(hour),"PM"))
                {
                    hour=hour+12;
                }
                format=0;
            }
        }
        const char* get_suffix(float hour){
            if(floor(hour/12)*12==0)
            {
                return "AM";
            }
            else{
                return "PM";
            }
        }
};
int main()
{
    times t;
    t.input();
    t.convert();
    t.output();
    return 0;
}