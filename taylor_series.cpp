#include <iostream>
using namespace std;

double taylor(int x, int n)
{
    static double num =1;
    static double den =1;
    static double term;
   if(n==0)
   {
       return 1;
   }
   else
   {
       term = taylor(x,n-1);
       num *= x;
       den *= n;
       return (term + num/den);
   }
}
//By Homer's Rule...
double homer(double x, double n)
{
    static double temp = 1;
    if(n==0)
    {
        return temp;
    }
    else
    {
        temp = 1 + (x/n * temp);
        return homer(x,n-1);
    }
}

double loop(double x, double n)
{
    double num=1,den=1,sum=1;
    
    for(double i=1;i<=n;i++)
    {
        num *= x ;
        den *= i ;
        sum = sum + (num/den) ;
         
    }
    return sum;
}

int main()
{
    int x,n;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter n :";
    cin>>n;

    cout<<"\nBy recursion :"<<taylor(x,n)<<endl;
    cout<<"By Homer's Rule :"<<homer(x,n)<<endl;
    cout<<"By Loop :"<<loop(x,n)<<endl;
    
}