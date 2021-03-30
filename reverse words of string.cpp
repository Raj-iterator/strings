#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str1[30], str2[30] ;
	
	int n,c,i,j,k,u=0;
	gets(str1);
	
    n = strlen(str1);
    c = n;
    k = n;
    for(i = n - 1;i>=0;i--)
    {
    	if( str1[i] == ' ' || i == 0)
    	{
    		
    		c--;
    		//cout<<c<<endl;
    		if( i == 0)
			   j = c;
			   else
			    j = c+1;
    		for(; j<k;j++)
    		{
    			str2[u]  = str1[j];
    			u++;
			}
			k = c;
			if(str1[c] == ' ')
			{
			str2[u] = str1[c];
			u++;
		}
		}
		else 
		   c--;
	}
	
	puts(str2);
	
}
