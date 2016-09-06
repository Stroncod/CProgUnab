#include <iostream>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;
int main(int argc, char const *argv[])
{
	int loop,cont=1;
	int sal1,sal2,sal3;
	std::vector<int> v;
	std::cin >>loop;
	while(cont<=loop) {
	    std::cin >> sal1>>sal2>>sal3;
	   	v.push_back(sal1);
	   	v.push_back(sal2);
	   	v.push_back(sal3);
	   	sort (v.begin(), v.end());
	   	cout << "Case "<<cont<<": "<<v[1]<<endl;
	   	cont++;
	   	v.clear();
	}
	return 0;
}