#include<iostream>
#include<string>

using namespace std;

main(){
string x;
cin>>x;	
for( int i=0;i<=(x.size()-1);i++)	
{
char y=x[i];
if ( y=='\\')
break;
cout<<x[i];
		
}	
cout<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}