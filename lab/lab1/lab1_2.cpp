#include<iostream>
class numb
{
    int a,b,c,max,min;
    public:
        void input()
        {
            std::cout<<"Enter the numbers"<<std::endl;
            std::cin>>a>>b>>c;
        }
        void det_max()
        {
            if (a>=b&&a>=c)
            {
                max=a;
            }
            else if (b>=a&&b>=c)
            {
                max=b;
            }
            else if (c>=b&&c>=a)
            {
                max=c;
            }
        }
        void det_min()
        {
            if (a<=b&&a<=c)
            {
                min=a;
            }
            else if (b<=a&&b<=c)
            {
                min=b;
            }
            else if (c<=b&&c<=a)
            {
                min=c;
            }
        }
        void print()
        {
            if(max==min)
            {
                std::cout<<"the max and min is same :"<<max;
            }
            else
            {
            std::cout<<"The maximum is "<<max<<" and the minimum is "<<min<<std::endl;
            }
        }
};
int main()
{
    numb n;
    n.input();
    n.det_max();
    n.det_min();
    n.print();
    return 0;
}
