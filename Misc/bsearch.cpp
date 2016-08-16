//Busqueda Binaria
#include <iostream>     
#include <algorithm>    
#include <vector> 
int main(int argc, char const *argv[])
{
	int numeros[] = {1,2,3,4,5,7,2,3,4,5,7,9,1,3,7,9,0};
	std::vector<int> v(numeros,numeros+17);
	std::sort(v.begin(), v.end());
	//Buscamos un 3
	if (std::binary_search(v.begin(),v.end(),3))
	{
		std::cout <<"Encontrado \n";
	}else {
		std::cout << "No encontrado";
	}
	return 0;
}