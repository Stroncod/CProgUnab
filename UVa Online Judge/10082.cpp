#include <iostream>
#include <map>
#include <string>
int main(int argc, char const *argv[])
{
	std::map<char, char> mapa;
	std::string mensaje;
	std::string final;
	
	char espacio=' ';
	//Llenamos el mapa
	mapa.insert(std::pair<char,char>('W','Q'));
	mapa.insert(std::pair<char,char>('E','W'));
	mapa.insert(std::pair<char,char>('R','E'));
	mapa.insert(std::pair<char,char>('T','R'));
	mapa.insert(std::pair<char,char>('Y','T'));
	mapa.insert(std::pair<char,char>('U','Y'));
	mapa.insert(std::pair<char,char>('I','U'));
	mapa.insert(std::pair<char,char>('O','I'));
	mapa.insert(std::pair<char,char>('P','O'));
	mapa.insert(std::pair<char,char>('[','P'));
	mapa.insert(std::pair<char,char>(']','['));
	mapa.insert(std::pair<char,char>('\\',']'));
	mapa.insert(std::pair<char,char>('S','A'));
	mapa.insert(std::pair<char,char>('D','S'));
	mapa.insert(std::pair<char,char>('F','D'));
	mapa.insert(std::pair<char,char>('G','F'));
	mapa.insert(std::pair<char,char>('H','G'));
	mapa.insert(std::pair<char,char>('J','H'));
	mapa.insert(std::pair<char,char>('K','J'));
	mapa.insert(std::pair<char,char>('L','K'));
	mapa.insert(std::pair<char,char>(';','L'));
	mapa.insert(std::pair<char,char>('X','Z'));
	mapa.insert(std::pair<char,char>('C','X'));
	mapa.insert(std::pair<char,char>('V','C'));
	mapa.insert(std::pair<char,char>('B','V'));
	mapa.insert(std::pair<char,char>('N','B'));
	mapa.insert(std::pair<char,char>('M','N'));
	mapa.insert(std::pair<char,char>(',','M'));
	mapa.insert(std::pair<char,char>('.',','));
	mapa.insert(std::pair<char,char>('/','.'));
	mapa.insert(std::pair<char,char>('1','`'));
	mapa.insert(std::pair<char,char>('2','1'));
	mapa.insert(std::pair<char,char>('3','2'));
	mapa.insert(std::pair<char,char>('4','3'));
	mapa.insert(std::pair<char,char>('5','4'));
	mapa.insert(std::pair<char,char>('6','5'));
	mapa.insert(std::pair<char,char>('7','6'));
	mapa.insert(std::pair<char,char>('8','7'));
	mapa.insert(std::pair<char,char>('9','8'));
	mapa.insert(std::pair<char,char>('0','9'));
	mapa.insert(std::pair<char,char>('-','0'));
	mapa.insert(std::pair<char,char>('=','-'));
	//Comparamos el mensaje con el mapa
	while(std::getline(std::cin,mensaje)) {
	    for(int i = 0; i < mensaje.length(); ++i) {
		if (mensaje[i]==espacio)
		{
			final+=espacio;
		} else{
			for (auto it= mapa.begin(); it !=mapa.end() ;  ++it)
			{
				if (mensaje[i]==it->first)
				{
					final+=it->second;
				}
			}
		}
		
	}
	std::cout<<final<<std::endl;
	}
	

	
	return 0;
}