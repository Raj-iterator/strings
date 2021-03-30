#include<stdio.h>
#include<string.h>
int main()
{                                              // REVERSING OF EACH WORD IN A GIVEN STRING
	int i,j=0,p,q=0,n;
	char str[100] , str1[100];
	gets(str);
	
	
	n = strlen(str);   // get the lenth of the string
	
	for(i=0;i<=n;i++)  // iterate loon from 0 to lenth of the string
	{
		 if(str[i] == '.' || str[i] == '\0') //  check for the both if the string is equal to '.' or '\0'.
		 {
		 	 p = i-1;                   
		 	 while(p >= q)
		 	 {
		 	 	str1[j] = str[p];   /*   *for 1st if ccond true it will produce
		 	 	                               ->   rpq.
		 	 	                     *for 2nd if cond true it will produce
		 	 	                               ->   rpq.mno*/
		 	     p--; 
		 	 	 j++;
			  }
			   str1[i] = str[i];
			   q=i+1;
			   j=j+1;
		 }			   
	}
	
	puts(str1);
	return 0;
}
