#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string frase;
	
	string token="``";
	string token2="''";
	int flag=0;
	while(true){
		getline (cin,frase);
		if(frase==""){
			break;
		}else{
			size_t found = frase.find_first_of("\"");
	while(found!=string::npos) {

		if(flag){
			frase.erase (found,1);
	    	frase.insert(found,token2);
	    	found=frase.find_first_of("\"",found+1);
	    	flag=0;

		}else{
			frase.erase (found,1);
	    	frase.insert(found,token);
	    	found=frase.find_first_of("\"",found+1);
	    	flag=1;
		}
		
	}

	cout << frase <<endl;

		}
	}
	
	return 0;
}