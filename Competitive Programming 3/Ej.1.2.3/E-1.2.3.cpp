#include <math.h>
#include <iostream>
#include <iomanip>  
#include <time.h> 
#include <set>
#include <vector>
#include <algorithm> 
#include <string>
#include <sstream>

void problema2 (){
	int n;
	std::cin >> n;
	const long double PI = 3.141592653589793238L;
	std::cout << std::setprecision(n+1) << PI <<std::endl; 
}
void problema3 (){
	time_t rawtime;
	struct tm *timeinfo;
	int year, month, day;
	const char* weekday[] = { "Sunday", "Monday",
                             "Tuesday", "Wednesday",
                             "Thursday", "Friday", "Saturday"
	};

	std::cin >> day >> month >>  year;

	time ( &rawtime);
	timeinfo = localtime (&rawtime);
	timeinfo->tm_year = year -1900;
	timeinfo->tm_mon = month -1;
	timeinfo->tm_mday = day;
	mktime(timeinfo);
	std::cout << weekday[timeinfo->tm_wday] << std::endl; 
}
void problema4 (){
	int n,number;
	int i= 0;
	std::cin >> n;
	std::set<int> _set;
	std::set<int>::iterator it;
	do{
		std::cin >> number;
		_set.insert(number);
		i++;
	}while(i<n); 
	
	for (it = _set.begin(); it != _set.end(); ++it)
	{
		std::cout << ' ' << *it;
	}
	std::cout<< '\n';
}
/*void problema5 (){
	struct b_date {
			int year; 
			int month; 
			int day; 		
		};
	struct myclass {
  		bool operator() (int i,int j) { return (i<j);}
	} myobject;
	std::vector<b_date> v;
	int n;
	std::cin >>  n;
	for(unsigned i = 0; i < n; ++i) {
		std::cin >> v[i].day;
		std::cin >> v[i].month;
		std::cin >> v[i].year;
	}
	std::sort(v.begin()->month,v.end()->month,myobject);
	for (std::vector<int>::iterator it=v.begin(); it!=v.end(); ++it){
		std::cout << ' ' << *it->day << *it->month << *it->year;
	}	
  	std::cout << '\n';

}*/

void problema9 (){
	
	
	std::string input;
	std::cin >> input;
	long x = std::strtoul(input.c_str(),nullptr,10);
	long y = std::strtoul(input.c_str(),nullptr,2);
	std::cout<< x << ' ' << y << std::endl;
} 	

int main(int argc, char const *argv[])
{
 	
	//problema2();
	//problema3();
	//problema4();
	//problema5();
	//problema9();
}