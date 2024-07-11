#include<iostream>
#include<cmath>
using namespace std;
class distances
{
    private:
        float  feet,inches;
    public:
    void input()
    {
        cout<<"Enter the distance as feet and inches"<<endl;
        cin>>feet>>inches;
    }
    void output()
    {
        cout<<feet<<" feet"<<" "<<inches<<" inches"<<endl;
    }
    friend distances add(distances&,distances&);
};
distances add(distances& d1,distances& d2)
    {
        distances sum;
        sum.feet=d1.feet+d2.feet+floor((d1.inches+d2.inches)/12);
        sum.inches=(d1.inches+d2.inches)-floor((d1.inches+d2.inches)/12)*12;
        return sum;
    }

int main()
{
    distances d1,d2,sum;
    d1.input();
    d2.input();
    sum=add(d1,d2);
    sum.output();
    return 0;
}