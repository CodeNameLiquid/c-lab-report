#include<iostream>
#include<cstring>
class strings
{
    char str[100];
    int length;
    public:
        strings(const char* st,int len)
        {
            strcpy(str,st);
            length=len;
        }
        void operator =(const strings& other)
        {
            strcpy(str,other.str);
            length=other.length;
        }
        void output()
        {
            std::cout<<str<<" "<<length<<std::endl;
        }
        friend bool operator ==(const strings&,const strings&);
        friend strings operator + (strings&,strings&);
};
bool operator ==(const strings& s1,const strings& s2)
{
    return strcmp(s1.str,s2.str)==0;
}
strings operator + (strings& s1,strings& s2)
{
    char res[100];
    for(int i=0;i<s1.length;i++)
    {
        res[i]=s1.str[i];
    }
    for(int i=0;i<s2.length;i++)
    {
        res[i+s1.length]=s2.str[i];
    }
    res[s1.length+s2.length]='\0';
    return strings(res,s1.length+s2.length);
}
int main()
{
    strings s1("aakash ",7),s2("adhikari",8);
    (s1+s2).output();
    s1=s2;
    s1.output();
    (s1+s2).output();
    return 0;
}