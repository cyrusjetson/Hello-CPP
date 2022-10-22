
#include <iostream>
using namespace std;

int main(){
		
        int r;
	
        cout << "Enter string: ";
	string sample;    
	cin >> sample;
	int strlen = sample.length();
	r = strlen;

	int temp2 = r;
	r = r / 2;
	for(int i = 0, j = 2*r; i < r, j > r; i++,j--){
	     int temp =0;
		while(temp <= 2*r)
		{
			if(temp == i || temp == j)
			  cout << sample[i];
			else
			  cout << " ";
			temp++;		
		}
		cout<< "\n";
	}
	
        int tem3 = strlen / 2;
	r = temp2 / 2;
	for(int i = r, j = r; i >= 0, j <= 2*r; i--,j++){
	     int temp =0;
		while(temp <= 2*r)
		{
			if(temp == i || temp == j)
			{
				 cout << sample[tem3];
			}
			else
			  cout << " ";
			temp++;
		}
	    tem3++;
		cout<< "\n";
	}
    return 0;
}
