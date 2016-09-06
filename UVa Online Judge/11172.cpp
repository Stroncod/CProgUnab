#include <iostream>

int main(int argc, char const *argv[])
{
	int loop,cont=0;
	int num1,num2;

	std::cin >>loop;
	while(cont<loop) {
	    std::cin >> num1 >> num2;
	    if (num1<num2)
	    {
	    	std::cout <<"<" << std::endl;
	    }
	    else if(num1>num2){
	    	std::cout <<">" <<std::endl;
	    }
	    else{
	    	std::cout <<"="<<std::endl;
	    }
	   	cont++;
	}
	return 0;
}
