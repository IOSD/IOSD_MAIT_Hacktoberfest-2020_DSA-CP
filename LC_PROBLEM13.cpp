class Solution {
public:
    int romanToInt(string s) {
        int I=1,V=5,X=10,L=50,C=100,D=500,M=1000; 
        int integer,len=0,sum=0;
   for(int i=0;s[i]!='\0';i++)
            len++;                 
       if(len>=1 && len<=15)
       {
           for(int i=0;s[i]!='\0';i++)
           {
        if(s[i]=='I')
        {
            if(s[i+1]=='V')
            {integer=V-1;
            i++;
             sum=sum+integer;}
            else if(s[i+1]=='X')
            {integer=X-1;
            i++;
             sum=sum+integer;}
            else
            sum=sum+I;
    
            
        }
        
        else if(s[i]=='X')
        {
            if(s[i+1]=='L')
            {integer=L-10;
            i++;
             sum=sum+integer;}
            else if(s[i+1]=='C')
            {integer=C-10;
            i++;
             sum=sum+integer;}
            else
            sum=sum+X;
        }
        else if(s[i]=='C')
        {
            if(s[i+1]=='D')
            {integer=D-100;
            i++;
             sum=sum+integer;}
            else if(s[i+1]=='M')
            {integer=M-100;
            i++;
             sum=sum+integer;}
            else
            sum=sum+C;
        }
        else
        {
            
            if(s[i]=='V')
                sum=sum+V;
                
            else if(s[i]=='L')
                sum=sum+L;
            else if(s[i]=='D')
                sum=sum+D;
            else if(s[i]=='M')
                sum=sum+M;
            
          }
        }
       }
    return sum; 
    }
};
