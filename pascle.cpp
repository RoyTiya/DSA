#include <iostream>
using namespace std;

int main()
{
    int n,pascle=1;
    cout<<"Enter :";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            if (i==0 || j==0)
            {
                pascle=1;
            }
            else
            {
                pascle = pascle*(i-j+1)/j;
            }
            cout<<pascle<<" ";
        }cout<<endl;
    }
    
}