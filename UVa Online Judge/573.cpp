#include <iostream>
#include <cmath>

//Copyright Joseto;

using namespace::std;

int main(int argc, char const *argv[])
{
	float H,U,D,distancia = 0.0;
	float fatiga, P;
	int dias;
	while(true)
	{
		dias = 0;
		distancia = 0.0;
		cin>>H>>U>>D>>P;
		if (H == 0)
		{
			break;
		}
		fatiga = (P/100)*U;
		while(true)
		{
			if (distancia>=0.0)
			{
				if ((U-(fatiga*dias))>0)
				{
					distancia = distancia+(U-(fatiga*dias));
				}
				
				if (distancia>H)
				{
					cout<<"success on day "<<dias+1<<endl;
					break;
				}
				distancia = distancia-D;
				dias++;
			}
			else
			{
				cout<<"failure on day "<<dias<<endl;
				break;
			}

		}
	}
	return 0;

}