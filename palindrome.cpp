#include <iostream>
using namespace std;

int palindrome(int a)
{
    int temp=a,rev=0;
    
    while(temp!=0)
    {
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    return rev;
}

int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>>a;

    if(a==palindrome(a))
    {
        cout<<"Palindrome Number"<<endl;
    }
    else
    {
        cout<<"Not a palindrome number"<<endl;
    }
}