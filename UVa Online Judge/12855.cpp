#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <sstream>
#include <fstream>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <unistd.h>
#include <cstdlib>

using namespace std;
/*
g++ codigo.cpp -o codigo.exe -std=c++11

2 1
BWWB

5 3
WBWWBWBWBWBBBWWBBB

1000000 0
W
*/
int main(){
    long swp, refu;
    long contador = 0;
    
    string palabra;
    cin >> swp;
    cin >> refu;
    cin >> palabra;
    
    
    
    for(int i = 0; i < palabra.size();i++){
        if(palabra[i] == 'B'){
            contador++;
        }
    }
    
    long tamano = contador;
    //long mitad = (palabra.size()/2)-1;
    
    int costo = 0;

    int j = tamano;
    bool banNeg = false;
    bool banBla = false;
        
    for(int i = (tamano-1); i >= 0; i--){
    	if(palabra[i] == 'W'){
	//			cout<<"i " << i << endl;
    	  banNeg = true;    
      }
      if(palabra[j] == 'B'){
	//			cout<<"j " << j << endl;
    	  banBla = true;
      }
      if(banBla && banNeg){
      	//funcion swap
				if(j-i == 1 || j-i == -1){
							//cout<<"swapAy"<<endl;
				  	  costo = costo + (swp-refu);
					}else{
				    if((j-i)*(swp-refu) < swp){
							//cout<<"swapAy"<<endl;
				  	  costo = costo + ((j-i)*(swp-refu));                    
				    }else{
							//cout<<"swap"<<endl;
				  	  costo = costo + swp;
				    }
					}            
        banNeg=false;
        banBla=false; 
      }else{
      	if(banBla){
        	j--;
        }
        if(banNeg){
          i++;
        }
      }
      j++;
	//		cout <<"costo "<<costo<<endl;
    }
		cout << costo<< endl;
       
    
    
    return 0;
}