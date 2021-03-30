#include<stdio.h>
#include<string.h>

int main()
{
	
	char str[11],a[11];
	int i,j=0,k =0,n;
	gets(str);
	
	n = strlen(str) - 1;

	
	for(i=n;i>=0;i--)
	{
		  if(str[i]== 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u' )
		  {
		  	  a[k] = str[i];
		  	   k++;
		  }
}

	for(i=0;i<=n;i++)
	{
		  if(str[i]== 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u' )
		  {
		  	  str[i] = a[j];
		  	   j++;
		  }
	}
	
	puts(str);
	
}
