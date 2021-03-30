#include<bits/stdc++.h>
using namespace std;

int main()
{
	char str[100];
	int n,k=0,c,p,x,z;
	char temp;
	gets(str);
	n=strlen(str);
	for(int i = 0;i<=n;i++ )
	{
		if(str[i] == ' ' || str[i] == '\0')
		{
			p=i-1;
			while(k != p && ( k!= z && p !=x))
			{
				x=k;
				z=p;
				temp = str[k];
				str[k] = str[p];
				str[p] = temp;
				k++;
				p--;
			}
			
			k = i+1;
		}
	}
	puts(str);
}
