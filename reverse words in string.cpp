#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[50];
	char atr[100];
	int n,end,ind=0,j;
	gets(str);
	n = strlen(str);
	
	end = n-1;
	for(int i = n-1;i>=0;i--)
	{
		cout<<end<<endl;/""
		if(i == 0)
		{
			for(j = 0;j<=end;j++)
			{
				atr[ind] = str[j];
				ind++;
			}
			 atr[ind] = '\0';

		}
		
		else if( str[i] == ' ')
		{
			for(j = i+1;j<=end;j++)
			{
				atr[ind] = str[j];
				ind++;
			}
			atr[ind] = str[i];
			ind++;
			end = i-1;
		}
		
	}
	puts(atr);
}
