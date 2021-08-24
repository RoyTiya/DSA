#include<iostream>
using namespace std;

int hcf(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}

int lcm(int a,int b)
{
    int pro = a*b;
    pro = pro/hcf(a,b);
}

int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"HCF is: "<<hcf(a,b)<<endl;
    cout<<"LCM is: "<<lcm(a,b)<<endl;    
}