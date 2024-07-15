#include<iostream>
#include<cmath>
using namespace std;
class cartesian;
class polar
{
    float mag,dir;
    public:
        polar(float m,float d)
        {
            mag=m;
            dir=d;
        }
        void input()
        {
            cout<<"Enter the polar coordinates"<<endl;
            cin>>mag>>dir;
        }
        void output()
        {
            cout<<"The polar coordinates are : "<<"("<<mag<<","<<dir<<")"<<endl;
        }
        cartesian ptc();
       
};
class cartesian
{
    float x,y;
    public:
        cartesian(float x_coord,float y_coord)
        {
            x=x_coord;
            y=y_coord;
        }
        void input()
        {
            cout<<"Enter the cartesian coordinates"<<endl;
            cin>>x>>y;
        }
        void output()
        {
            cout<<"The cartesian coordinates are : "<<"("<<x<<","<<y<<")"<<endl;
        }
        polar ctp()
        {
            float mag=sqrt(x*x+y*y);
            float dir=atan2(y,x);
            polar p(mag,dir);
            return p;
        }
};
cartesian polar::ptc(){
            float x=mag*sin(dir);
            float y=mag*cos(dir);
            cartesian c(x,y);
            return c;
}
int main()
{
    polar p(sqrt(2),atan(1));
    (p.ptc()).output();
    cartesian c(1,0);
    (c.ctp()).output();
    return 0;
}