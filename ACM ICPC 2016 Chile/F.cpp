#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
//1 -1 1 1 1 -1 1 1
int main(int argc, char const *argv[])
{
	string linea;
	int cont = 0, n1, n2, n3, x;
	cin>>n1>>n2>>n3;
	cin.ignore();
	getline(cin,linea);
	int arr[n1];
	int com[n2];
	/*for (int i = 0; i < n1; ++i)
	{
		arr[i] = i+1;
	}*/
	int pos = 1;
	
	int j = 0;
	for (int i = 0; i < linea.length(); ++i)
	{
		if (linea[i]=='1')
		{
			com[j] = 1;
			j++;
		}
		if (linea[i]=='-')
		{
			com[j] = -1;
			j++;
			++i;
		}
	}






	for (int i = 0; i < n2; ++i)
	{
		if (pos == n3)
		{
			cont++;
		}
		if(com[i]==1){
			pos++;
			if(pos == n1+1){
				pos = 1;

			}
		}else{
			pos--;
			if (pos == 0)
			{
				pos =n1;
			}
		}

	}
		if (pos == n3)
		{
			cont++;
		}
	cout<<cont<<endl;
	return 0;
}