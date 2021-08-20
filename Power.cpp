//program to make your own pow function 

#include <iostream>
using namespace std;

int power(int m, int n)
{ 
   if(n==0)
   {
       return 1;
   }
   //when there is even power
   if(n%2==0)
   {
       return power( m*m, n/2 ); 
   }
   //when there is odd power
   else
   {
       return m * power( m*m, (n-1)/2 );
   }
}


int main()
{
    int m, n ;
    cout << "Enter number :";
    cin >> m;
    cout << "Enter power :";
    cin >> n;
    cout << "->" << power(m,n);
}