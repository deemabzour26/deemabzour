#include<iostream>
#include<string>

using namespace std;

main(){
int n;
char x;
cout<<"what is the number of test cases  : ";
cin>>n;
if(n>=1&&n<=26){
for(int i=1;i<=n;i++)	
{cout<<"what  is the charecter  : ";
cin>>x;	
switch(x)	
{case 'c':case 'o':case 'd':case 'e':case 'f':case 'r':case 's':	
cout<<"yes"	<<endl;break;
default:cout<<"no"	<<endl;	}//sw	
   
   
   
   	
}//for	
}//if

	
	
	
	
}//main