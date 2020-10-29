#include <iostream>
using namespace std;

int main()
{
    float X,Y;
	float total,rem;
	cin>>X;
	cin>>Y;
	if((X>0 && X<=2000) && (Y>=0 && Y<=2000))
	{
	    if((int)X%5==0)
	    {
	        total=X+0.5;
	        if(total<=Y)
	        {rem=Y-total;
	        cout<<rem;}
	        else if(total>Y)
	        cout<<Y;
	    }
	    else
	    cout<<Y;
	}
return 0;
}
