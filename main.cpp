#include <iostream>
#include "Persona.hpp"
#include "Persona_Adm.hpp"
#include "Investigador.hpp"
#include "Forense.hpp"
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv[]){
	int opcion, opcion2, opcion3, opcion4;

	do{
		cout<<"*****MENÚ*****"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Modificar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Analizar Casos"<<endl;
		cout<<<"5. Salir"<<endl;
		cin>>opcion;

		if(opcion == 1){
			do{
			 cout << "Que desea agregar?"<<endl;
			 cout<< "1. Persona"<<endl;
			 cout<< "2. Evidencia" <<endl;
			 cout<< "3. Casos" << endl;
			 cout << "4. Salir"<<endl;
			 cin >>  opcion2;

			}while( opcion2 != 4);
		}

		if(opcion == 2){
			do{
			 cout<< "Que desea modifcar?"<<endl;
			 cout<< "1. Persona" <<endl;
			 cout<< "2. Evidencia" << endl;
			 cout<< "3. Casos" << endl;
			 cout << "4. Salir" <<endl;
			 cin>> opcion3;
			}while( opcion3 != 4);
		}

		if(opcion == 3){
			do{
				cout<<"Que desea eliminar?"<<endl;
				cout<<"1. Persona"<<endl;
				cout<<"2. Evidencia"<<endl:
				cout<<"3. Casos"<<endl;
				cout<<"4. Salir"<<endl;
			}while(opcion4 != 4);
		}

		if(opcion == 4){
			//Generar Reportes
		}
	}while(opcion != 5);

	return 0;
}
