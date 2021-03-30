#include<bits/stdc++.h>
using namespace std;

void swap(char &a, char &b)
{
	char temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	char str[50];
	gets(str);
	int n = strlen(str);
	int start = 0,end,count=0;
	for(int i = 0;i<=n;i++)
	{
		
		if( str[i] == ' ' || str[i] == '\0')
		{  
		   count = count/2; //this will decide how many times a swapping process need to be done for a word.
		   end = i-1; //ending index 
		    while( count>=1 ) // while loop reverses each word.
		    {
		    	swap( str[start] , str[end] );
		    	end--;
		    	start++;
		    	count--;
			}
			count=0;
			start = i+1; // starting index
		}
		count++;
		
	}
	
	puts(str);
}
