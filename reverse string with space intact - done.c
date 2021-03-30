#include<stdio.h>
#include<string.h>

int main()
{
	char str1[16] , str2[16];
	int i,j=0,n,m;
	
	gets(str1);
	
	n = strlen(str1);
//this for loop fills space in str2 as str1 has.
    for(i=0;i<n;i++)
    {
    	if( str1[i] == ' ')
    	     str2[i] = ' ';
	}
	
// forloop begins to reverse	
	for(i=n-1 ; i>=0;i--)
	{
		 if( str1[i] != ' '  &&  str2[j] != ' ')
		 {
		 	str2[j] = str1[i];
		 	j++;
		 }
		 else if( str1[i] == ' ' && str2[j] != ' ')
		 {
		 	str2[j] = str1[i-1];
		 	 i = i-1;
		 	 j++;
		 }
		 else if( str1[i] != ' ' && str2[j] == ' ')
		 {
		    ///str2[j]=' ';
		 	str2[j+1] = str1[i];
		 	j= j+2;
		
		 }
	}
	str2[j]='\0';
printf("%s", str2);
return 0;
}

// 3 condition;

// 1.  if both column of the strings str1 and str2 doesnot have space means simple put str1[i] to str2[j];   j++
// 2.  if str1 have space, str2 doesnt have space means,  put str1[i-1] to str2[j];                          j++ , i-- 
// 3.  if str1 doesnot have space means, str2 have space means put str1[i] to str2[j+1];                     j++ , j++     

  
