#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    if(a>0&&b>0)
    {
        cout<<"Q1"<<"\n";
    }
    if(a<0&&b>0)
    {
        cout<<"Q2"<<"\n";
    }
    if(a<0&&b<0)
    {
        cout<<"Q3"<<"\n";
    }
    if(a>0&&b<0)
    {
        cout<<"Q4"<<"\n";
    }
    if(a==0&&b==0)
    {
        cout<<"Origem"<<"\n";
    }
     if(a==0&&b!=0)
    {
        cout<<"Eixo Y"<<"\n";
    }
     if(a!=0&&b==0)
    {
        cout<<"Eixo X"<<"\n";
    }


    return 0;
}
