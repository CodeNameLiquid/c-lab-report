#include<iostream>
using namespace std;
class complex
{
    float real,img;
    public:
        void input()
        {
            cout<<"Enter the real and imaginary part"<<endl;
            cin>>real>>img;
        }
        void output()
        {
            cout<<"The complex number is "<<real<<" + "<<img<<"i"<<endl;
        }
        friend complex operator + (complex,complex);
        friend complex operator - (complex,complex);
        friend complex operator * (complex,complex);
        friend complex operator / (complex,complex);
};
complex operator + (complex c1,complex c2)
{
    complex sum;
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    return sum;
}
complex operator - (complex c1,complex c2)
{
    complex sum;
    sum.real=c1.real-c2.real;
    sum.img=c1.img-c2.img;
    return sum;
}
complex operator * (complex c1,complex c2)
{
    complex sum;
    sum.real=c1.real*c2.real-(c1.img*c2.img);
    sum.img=c1.real*c2.img+c2.real*c1.img;
    return sum;
}
complex operator / (complex c1,complex c2)
{
    complex sum;
    sum.real=(c1.real*c2.real+(c1.img*c2.img))/(c2.real*c2.real+c2.img*c2.img);
    sum.img=-(c1.real*c2.img-c2.real*c1.img)/(c2.real*c2.real+c2.img*c2.img);
    return sum;
}
int main()
{
    complex c1,c2;
    c1.input();
    c2.input();
    (c1+c2).output();
    (c1-c2).output();
    (c1*c2).output();
    (c1/c2).output();
    return 0;
}