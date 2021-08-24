#include <iostream>
#include<math.h>
using namespace std;

void checkArmstrong(int num)
{
    int digit=0,temp=num;
    while(temp!=0)
    {
        digit++;
        temp/=10;
    }
    int sum=0;
    for(temp=num;temp!=0;temp/=10)
    {
        sum += pow(temp%10, digit);  
    }
    if(sum==num)
    {
        cout<< "It is an Armstrong Number!"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong Number!"<<endl;
    }
}

void checkPalindrome(int a)
{
    int temp=a,rev=0;
    
    while(temp!=0)
    {
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    if(a==rev)
    {
        cout<< "It is a Palindrome Number!"<<endl;
    }    
    else
    {
        cout<<"Not a Palindrome Number!"<<endl;
    }
}

void checkPerfect(int n)
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
        cout<< "It is a Perfect Number!"<<endl;
    }
    else
    cout<<"Not a Perfect Number!"<<endl;
    
}

void checkPrime(int num)
{
    bool temp;
    for(int i=2 ; i<num ; i++){
        if(num%i==0)
        {
            temp = true;
        }
        else
        {
            temp = false;
        }
    }
    if(temp==true)
    {
        cout<<"It is a Prime Number!"<<endl;
    }
    else
    {
        cout<< "Not a Prime Number!"<<endl;
    }
}

int main()
{
    int num, temp;
    cin>>num;

    checkArmstrong(num);
    checkPalindrome(num);
    checkPerfect(num);
    checkPrime(num);
        // switch (i)
        // {
        // case 1: temp = checkArmstrong(num);
        //     break;
        // case 2: temp = checkPalindrome(num);
        //     break;
        // case 3: temp = checkPerfect(num);
        //     break;
        // case 4: temp = checkPrime(num);
        //     break;
        // }
}