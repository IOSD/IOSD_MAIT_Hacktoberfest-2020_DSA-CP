#include <iostream>
#include<vector>
using namespace std;
int main() 
{
    int t,n,temp;
    
    cin>>t;
    if(t>=1 && t<=1000)
    {
        for(int k=0;k<t;k++)
        {int rev=0;
        cin>>n;
        
        if(n>=1 && n<=1000000)
        {
           while(n!=0)
           {
           temp=n%10;
           n=n/10;
           rev=(rev*10)+(temp);
           }
           
        }
        else
        {
            cout<<"invalid";
        
        }
        cout<<rev;
        cout<<endl;}
    }
    else
    {
        cout<<"invalid";
    }
	return 0;
}
