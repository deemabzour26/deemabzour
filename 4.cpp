
#include <iostream>
using namespace std;

int main() {
	
    int n, k;
    cin >> n >> k;
    int grades[50];
int c=0;
    for (int i = 0 ; i < n; i++)
        cin >> grades[i];
  {
  	
  
    int x = grades[k - 1];
    

    for (int i = 0; i < n; i++)
		 {
        if (grades[i] > 0 && grades[i]>=x)
        c++;}//nf
    }//f

    cout << c << endl;
    
}
	
	
	
	
	
	
	
	
	
