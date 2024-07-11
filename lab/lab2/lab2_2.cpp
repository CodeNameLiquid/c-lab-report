#include<iostream>
using namespace std;
class dollor;
class rupee
{
    private:
        float value;
    public:
        void input()
        {
            cin>>value;
        }
        void output()
        {
            cout<<value<<endl;
        }
        friend bool operator == (dollor&,rupee&);
        friend bool operator != (dollor&,rupee&);
        friend bool operator >= (dollor&,rupee&);
        friend bool operator <= (dollor&,rupee&);
        friend bool operator > (dollor&,rupee&);
        friend bool operator < (dollor&,rupee&);
};
class dollor
{
    private:
        float value;
    public:
        void input()
        {
            cin>>value;
        }
        void output()
        {
            cout<<value<<endl;
        }
        friend bool operator == (dollor&,rupee&);
        friend bool operator != (dollor&,rupee&);
        friend bool operator >= (dollor&,rupee&);
        friend bool operator <= (dollor&,rupee&);
        friend bool operator > (dollor&,rupee&);
        friend bool operator < (dollor&,rupee&);
};
bool operator == (dollor &d,rupee &r)
        {
            return (101.36*d.value)==r.value;
        }
bool operator != (dollor &d,rupee &r)
    {
        return (101.36*d.value)!=r.value;
    }
bool operator >= (dollor &d,rupee &r)
    {
        return (101.36*d.value)>=r.value;
    }
bool operator <= (dollor &d,rupee &r)
    {
       return (101.36*d.value)<=r.value;
    }
bool operator > (dollor &d,rupee &r)
    {
        return (101.36*d.value)>r.value;
    }
bool operator < (dollor &d,rupee &r)
    {
       return (101.36*d.value)<r.value;
        
    }   
int main()
{
    dollor d;
    rupee r;
    
    cout << "Enter value in rupees: ";
    r.input();
    cout << "Enter value in dollars: ";
    d.input();

    if (d==r)
        cout << "Rupee and Dollar are equal." << endl;

    if (d != r)
        cout << "Rupee and Dollar are not equal." << endl;

    if (d >= r)
        cout << "dollor is greater than or equal to rupee." << endl;

    if (d <= r)
        cout << "dollor is less than or equal to rupee." << endl;

    if (d > r)
        cout << "dollor is greater than rupee." << endl;

    if (d < r)
        cout << "dollor is less than rupee." << endl;

    return 0;
}