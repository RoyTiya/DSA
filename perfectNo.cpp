#include <iostream>
using namespace std;

bool perfect(int n)
{
    int sum=0,temp=n;
    sum-=n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=n/i;
        }
    }
    if(sum==temp)
    {
        return true;
    }
    return false;
    
}

int main()
{
    int a;
    cout<<"Enter : ";
    cin>>a;

    if(perfect(a))
    {
        cout<<"Perfect number!!"<<endl;
    }
    else
    cout<<"not a perfect number."<<endl;
}