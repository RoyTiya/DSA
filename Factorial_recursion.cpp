#include <iostream>
using namespace std;

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else if(n>1)
    {
        return n*fact(n-1);
    }
    else{
        return -1;
    }
}

int main()
{
    int n;
    cout<<"Enter :";
    cin>>n;
    
    if(fact(n)==-1)
    {
        cout<<"Factorial doesn't exist";
    }
    else
    {
        cout<<"Factorial of "<<n<<" is "<<fact(n);
    }
}