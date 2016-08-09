//Hours and Minutes
//Unab 08/2016
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int angulo;
	while(cin>>angulo) {
	    if (angulo%6 == 0)
		{
			cout<<'Y'<<endl;
		}
		else{
			cout<<'N'<<endl;
		}
	}
	return 0;
}