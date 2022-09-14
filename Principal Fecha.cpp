#include "fecha.h"
#include <cstdlib>
#include <iostream>


using namespace std;
int main (int argc, char * arg[])
{
	int d, m, a, r=1;
	system("cls");
	cout<<"Creado por Alviso Amaya Jesus Yahir"<<endl;
	cout<<"Examen U1"<<endl;
	cout<<"Programa para insertar una fecha"<<endl;
	
		Fecha hoy(d, m, a);
		do
		{
		
			hoy.visualizarFecha();
			hoy.compararFecha();
			cout<<"Desea volver a insertar? \n Si[1] \n No[cualquier numero]"<<endl;
			cin>>r;
		}while(r==1);
	


	getchar();
    system("pause");
    return 0;
}
