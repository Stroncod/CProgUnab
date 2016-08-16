
#include <iostream>
#include <string>
using namespace std ;

int clock (int _ps1, int _ps2 ){

	int cont=0;
	while(_ps1!=_ps2) {
	    if(_ps1==0)
	    	_ps1=40;
	    _ps1--;
	    cont++;
	}
	return cont;
}

int cclock(int _ps1, int _ps2 ){

	int cont=0;
	while(_ps1!=_ps2) {
	    if(_ps1==39)
	    	_ps1=-1;
	    _ps1++;
	    cont++;
	}
	return cont;
}
int main(int argc, char const *argv[])
{
	int i_pos,c1,c2,c3;
	int total= 1080;

	
	while(true) {
		cin>>i_pos>>c1>>c2>>c3;
	    if(i_pos==0 && c1==0 && c2==0 && c3==0) {

	    	break;
	    }

	    int pos1 = clock(i_pos,c1);
		int pos2 = cclock(c1,c2);
		int pos3 = clock(c2,c3);
		total+=(pos1+pos2+pos3)*9;
		cout << total <<endl;
		total=1080;
	}
	
	return 0;
}