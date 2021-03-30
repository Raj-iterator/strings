#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	 string str1, str2;
	 int c,k, n1,n2,flag=0;
	 char ch;

	 cin>>str1;
	 cin>>str2;
	 ch = str1[0];
	 n1 = str1.length();
	 n2 = str2.length();
	 
	 for(int i = 0;i<n2-n1;i++)
	 {
	 	k = 0,c=0;
	 	if(str2[i] == ch)
	 	{
	 		 for(int j = i;j<n2;j++)
	 		 {
	 		 	 if( str1[k] == str2[j] )
	 		 	 {
	 		 	 	 c++;
	 		 	 	 k++;
				   }
			  }
		 }
		 
		 if( c == n1)
		 {
		 	flag = 1;
		 	cout<<"Yes present";
		 	break;
		 }
		  
	 }
	 
	 if(flag == 0)
	 cout<< "Not present";
}
