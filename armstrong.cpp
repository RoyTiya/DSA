#include <iostream>
#include<math.h>
using namespace std;

bool checkArmstrong(int num)
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
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout<<"Enter :";
    cin>> num ;

    bool result = checkArmstrong(num);
    
    if(result)
    {
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout <<"not an armstrong number"<<endl;
    }
}

