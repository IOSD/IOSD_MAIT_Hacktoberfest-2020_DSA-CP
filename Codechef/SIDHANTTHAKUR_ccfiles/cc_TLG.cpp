#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,l=0,w=0,dif;
	cin>>n;
	if(n<=10000)
	{
	    int s,t,c1=0,c2=0;
	    for(int i=0;i<n;i++)
	    {
	        
	        cin>>s>>t;
	        c1+=s;
	        c2+=t;
	        if((s>=1 && s<=1000) && (t>=1 && t<=1000))
	        {
	            dif=abs(c1-c2);
	            if(l<dif)
	            {
	                l=dif;
	                if(c1>c2)
	                w=1;
	                else
	                w=2;
	            }
	       }
	    }
cout<<w<<"\t"<<l;
	}
	else
	{
	    cout<<"invalid";
	}
	return 0;
}
