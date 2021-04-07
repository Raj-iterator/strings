#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[50];
	char atr[100];// reversed string to be stored
	int n,end,ind=0,j;
	gets(str);
	n = strlen(str);
	
	end = n-1;// initializing end inex
	for(int i = n-1;i>=0;i--)
	{
		
		if(i == 0)// only if i reaches 0th index
		{
			for(j = 0;j<=end;j++)
			{
				atr[ind] = str[j];
				ind++;
			}
			 atr[ind] = '\0';

		}
		
		else if( str[i] == ' ') //looking for spaces and words
		{
			for(j = i+1;j<=end;j++)
			{
				atr[ind] = str[j];
				ind++;
			}
			atr[ind] = str[i]; // copying space
			ind++;
			end = i-1;// re-Initializing end index
		}
		
	}
	puts(atr);
}
