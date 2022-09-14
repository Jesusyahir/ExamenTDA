#include <cstdlib>
#include <iostream>
#include <new> 

using namespace std;

class Fecha
{
	private:
		int Dia, Mes, Anio;
	
	public:
		Fecha(){Dia=Mes=Anio=0;
		}
		Fecha(int D, int M, int A){Dia=Mes=Anio=0;
		}
		void visualizarFecha();
		void compararFecha();
	
};

void Fecha::visualizarFecha()
{
	cout<<"Introduce el Dia"<<endl;
	cin>>Dia;
	cout<<"Introduce el Mes"<<endl;
	cin>>Mes;
	cout<<"Introduce el Año"<<endl;
	cin>>Anio;
	if(Anio>2022 || Mes>13 || Dia<1||Mes<1 ||Anio<1)
	{
		cout<<"ERROR__---... 0_o \n no ha pasado ese año o no extiste"<<endl;
	}
	else
	{
		if(Mes==1 && Dia<31)
		{
			cout<<"Fecha: "<<Dia<<" de Enero de "<<Anio<<endl;
		}
		else
		{
			if(Mes==2 && Dia<28)
			{
				cout<<"Fecha: "<<Dia<<" de Febrero de "<<Anio<<endl;
			}
			else
			{
				if(Mes==3 && Dia<31)
				{
					cout<<"Fecha: "<<Dia<<" de Marzo de "<<Anio<<endl;
				}
				else
				{
					if(Mes==4 && Dia<30)
					{
						cout<<"Fecha: "<<Dia<<" de Abril de "<<Anio<<endl;
					}
					else
					{
						if(Mes==5 && Dia<31)
						{
							cout<<"Fecha: "<<Dia<<" de Mayo de "<<Anio<<endl;
						}
						else
						{
							if(Mes==6 && Dia<30)
							{
								cout<<"Fecha: "<<Dia<<" de Junio de "<<Anio<<endl;
							}
							else
							{
								if(Mes==7 && Dia<31)
								{
									cout<<"Fecha: "<<Dia<<" de Julio de "<<Anio<<endl;
								}
								else
								{
									if(Mes==8 && Dia<31)
									{
										cout<<"Fecha: "<<Dia<<" de Agosto de "<<Anio<<endl;
									}
									else
									{
										if(Mes==9 && Dia<30)
										{
											cout<<"Fecha: "<<Dia<<" de Septiembre de "<<Anio<<endl;
										}
										else
										{
											if(Mes==10 && Dia<31)
											{
												cout<<"Fecha: "<<Dia<<" de Octubre de "<<Anio<<endl;
											}
											else
											{
												if(Mes==11 && Dia<30)
												{
													cout<<"Fecha: "<<Dia<<" de Noviembre de "<<Anio<<endl;
												}
												else
												{
													if(Mes==12 && Dia<31)
													{
														cout<<"Fecha: "<<Dia<<" de Diciembre de "<<Anio<<endl;
													}
												}
												
											}
										}
									}
								}
							}
						}
						
					}
				}
			}
		}
	}
	
	
}

void Fecha::compararFecha()
{
	if(Dia==21 && Mes==10)
	{
		cout<<"Felicidades_Hoy es tu cumpleaños :3 "<<endl;
	}
	if(Anio>2022 || Mes>12 || Dia<1||Mes<1 ||Anio<1)
	{
		cout<<"No hay fecha"<<endl;
	}
	else
	{
		cout<<"hoy no es tu cumpleaños "<<endl;
	}
	
	
}
