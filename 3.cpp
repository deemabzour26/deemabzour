#include<iostream>
#include<string>

using namespace std;

main(){
int n;
string ar;
cout<<"enter the array   :  "  ; 
cin>>ar;		
cout<<"enter the number   :  "  ; 
cin>>n;	

for(int i=0;i<=ar.size()-1;i++)	
{
if (n == ar[i] - '0')	
cout<<"the number is : "<<n<<endl<<"it is position is  : "<<i<<endl;	
	
}	
	
	
	
	
	
	
	
}