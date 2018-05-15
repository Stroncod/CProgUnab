#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	string mesa1;
	string mesa2;
	for (int i = 0; i < n-1; ++i)
	{
		mesa1 = to_string(i);
		mesa2 = to_string(i);
	}
	string input;
	bool canBe = true;


	while(getline(cin, input) && input != "-1 -1") {
		auto it = find(mesa1.begin(), mesa1.end(), input[0]);
	    if(it != mesa1.end()){

	    	replace(mesa2.begin(), mesa2.end(), input[0], '!');
	    	replace(mesa1.begin(), mesa1.end(), input[2], '!');
	    }
	    else {
	    	auto it = find(mesa2.begin(), mesa2.end(), input[0]);
	    	if(it != mesa2.end()){
	    		replace(mesa1.begin(), mesa1.end(), input[0], '!');
	    		replace(mesa2.begin(), mesa2.end(), input[2], '!');

	    	}
	    	else{
	    		canBe = false;
	    	} 
	    } 
	}
	if (canBe)
	{
		cout<<"Se puede we";
	} else {
		cout <<"No se puede we ";
	}

	return 0;
}