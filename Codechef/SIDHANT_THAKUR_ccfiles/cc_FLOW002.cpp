#include <iostream> 
using namespace std;

int main() 
{
	int t;
	cin>>t;
	if(t>=1 && t<=1000)
	{
	    for(int i=0;i<t;i++)
	    {
		    int a,b;
		    cin>>a>>b;
		    if(a>=1 && a<=10000 && b>=1 && b<=10000)
	        cout<<a%b<<endl;
	        else
	        cout<<"invald entry\n";
	    }
    }
    else
    {
        cout<<"invalid";
    }
	return 0;
}
