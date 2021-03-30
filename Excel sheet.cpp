#include<bits/stdc++.h>
using namespace std;

void printstring(int n)
{
	int rem,i=0;
	char str[20];
	
	 while(n!=0)
	 {
	 	 rem = n % 26;
	 	 if( rem == 0)
	 	 {
	 	 	  str[i++] = 'z';
	 	 	  n = (n/26) - 1;
		  }
		  else
		  {
		  	str[i++] = (rem -1) + 'a';
		  	n = n/26;
		  }
	 }
	 str[i] = '\0';
	 strrev(str);
	 puts(str);
}

int main()
{
	int n;
	cin>>n;
	printstring(n);
}
