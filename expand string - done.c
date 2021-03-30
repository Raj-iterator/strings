#include<stdio.h>

int main()
{
	char str[20];
	int i,j,k,p,q,count[10],mid,n;
	
	gets(str);
	
	n = strlen(str);
	mid = strlen(str)/2;
	k = 0;
	q=0;
	
	for(i=0;i<n;i++)
	{
		 if( str[i] <= '9' && str[i] >'0')
		 {
		 	count[k] = str[i] - 49;
		 	k++;
		 }
	}
	
//	for(i = 0;i<k;i++)
//	printf("%d ",count[i]);
	
	for(j=0;j<mid;j++)
	{
		for(p=0;p<=count[j];p++)
		  printf("%c",str[q]);
		  
		  q = q+2;
	}
	
	return 0;
}
