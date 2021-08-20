#include <iostream>
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        cout<<n;
        fun(fun(n-1));
    }
    return n;
}

int main()
{
    // int n;
    // cout<<"Enter :";
    // cin>>n;
    fun(3);
    // return 0;
}