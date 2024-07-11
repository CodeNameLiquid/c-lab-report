#include<iostream>
#include<cstring>
class strings
{
    char* str;
    int length;
    public:
        strings(const char* st)
        {
            length = strlen(st);
            str =new char[length+1];
            strcpy(str,st);
            str[length]='\0';
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
    char* res=new char[s1.length+s2.length+1];
    for(int i=0;i<s1.length;i++)
    {
        res[i]=s1.str[i];
    }
    for(int i=0;i<s2.length;i++)
    {
        res[i+s1.length]=s2.str[i];
    }
    res[s1.length+s2.length]='\0';
    return strings(res);
}
int main()
{
    strings s1("aakash "),s2("adhikari");
    (s1+s2).output();
    s1=s2;
    s1.output();
    (s1+s2).output();
    return 0;
}