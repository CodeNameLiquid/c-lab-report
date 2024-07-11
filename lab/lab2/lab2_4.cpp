#include<iostream>
#include<cmath>
class time
{
    private:
        int hour,min,sec;
    public:
        time()
        {
            hour=0;
            min=0;
            sec=0;
        }
        time(int h,int m,int s)
        {
            hour=h;
            min=m;
            sec=s;
        }
        void output()
        {
            std::cout<<hour<<" :: "<<min<<" :: "<<sec<<std::endl;
        }
        friend time operator +(time&,time&);
        friend time operator -(time&,time&);
        friend bool operator >(time&,time&);
        
};
time operator + (time& t1,time& t2)
    {
    int t_time=(t1.sec+t1.min*60+t1.hour*60*60)+(t2.sec+t2.min*60+t2.hour*60*60);
    int hour=floor(t_time/3600);
    t_time=t_time%3600;
    int min=floor(t_time/60);
    int sec=t_time%60;
    return time(hour,min,sec);
    }
    time operator - (time& t1,time& t2)
    {
    int t_time=(t1.sec+t1.min*60+t1.hour*60*60)-(t2.sec+t2.min*60+t2.hour*60*60);
    int hour=floor(t_time/3600);
    t_time=t_time%3600;
    int min=floor(t_time/60);
    int sec=t_time%60;
    return time(hour,min,sec);
    }
    bool operator > (time& t1,time& t2)
    {
    int t_time1=(t1.sec+t1.min*60+t1.hour*60*60);
    int t_time2=(t2.sec+t2.min*60+t2.hour*60*60);
    return t_time1>t_time2;
    }
int main()
{
    time t1(5,47,32),t2(1,56,2);
    (t1+t2).output();
    (t1-t2).output();
    if(t1>t2)
    {
        std::cout<<"time 1 is bigger than time 2"<<std::endl;
    }
    return 0;
}