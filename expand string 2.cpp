#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
	string str;
	char arr[10];
	int count[10],k=0,p=0,num,n;
	cin>>str;
	n = str.length();
	for(int i = 0;i<n;i++)
	{
	   if(str[i] > '0' && str[i]< '9')
	   {
	   	p=0;
	   	   while( str[i] >= '0' && str[i] <='9' )
	   	   {
	   	   	   arr[p] = str[i];
	   	   	   p++;
	   	   	   i++;
			  }
			  arr[p] ='\0';
			  num = atoi(arr);
	
			  count[k] = num;
			  k++;
			  
	   }
	}
	int q=0;
	for(int i = 0;i<n;i++)
	{
		if( str[i] >= 'a' && str[i] <= 'z')
		{
			for(int j = 0;j< count[q];j++)
			 cout<<str[i];
			 
			 q++;
			 
		}
	}
	
}
