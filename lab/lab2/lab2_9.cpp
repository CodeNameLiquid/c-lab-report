#include<iostream>
using namespace std;
class matrix
{
    static int m,n;
    int* elem;
    public:
    matrix(){}
        matrix(int tm,int tn)
        {
            m=tm;
            n=tn;
            elem=new int[m*n];
        }
        void input()
        {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>*(elem+i*n+j);
            }
        }
        }
        void output()
        {
             for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<*(elem+i*n+j)<<" ";
            }
            cout<<endl;
        }
        }
        friend matrix operator +(matrix,matrix);
};
matrix operator +(matrix m1,matrix m2)
{
    matrix sum;
    sum=m1;
    for(int i=0;i<m1.m;i++)
    {
        for(int j=0;j<m1.n;j++)
        {
            
            
            *(sum.elem+i*sum.n+j)=*(m2.elem+i*sum.n+j)+*(m1.elem+i*sum.n+j);
        }
    }
    return sum;
}
int matrix::m=0;
int matrix::n=0;
int main()
{
    matrix m(2,2),m2;
    m2=m;
    m.input();
    m2.input();
    (m+m2).output();
    return 0;
}