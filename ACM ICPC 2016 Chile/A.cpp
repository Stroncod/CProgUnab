#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n1,n2,n3,n4;
	cin>>n1>>n2>>n3>>n4;

	int sum1= n1+n2;
	int sum2= n1+n3;
	int sum3 = n4+n1;
	int sum4= n3+n4;
	int sum5= n2+n4;
	int sum6= n3+n2;
	int dif1 = sum1 - sum4;
	int dif2 = sum2 - sum5;
	int dif3 = sum3 - sum6;
	dif1=abs(dif1);
	dif2 =abs(dif2);
	dif3 = abs(dif3);
	std::vector<unsigned int> v;
	v.push_back(dif1);
	v.push_back(dif2);
	v.push_back(dif3);
	sort(v.begin(),v.end());
	cout<<v[0]<<endl;

	return 0;
}