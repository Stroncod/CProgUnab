#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main(int argc, char const *argv[])
{	
	int t,n;
	int count=1;
	cin>>t;
	string walls;
	int high_jump=0, low_jump=0;
	int ant,numero;

	while(count <= t) {
		cin>>n;
		cin>>ant;
		for(unsigned i = 0; i < n-1; ++i) {
			cin>>numero;
			if(ant <numero) {
				high_jump++;
			}
			if(ant > numero) {
				low_jump++;
			}
			ant=numero;
			
		}
	   	
	   	cout<<"Case "<<count<<": "<<high_jump<<" "<<low_jump<<endl;
	   	count++;
	   	high_jump=0;
	   	low_jump=0;
	}
	return 0;
}