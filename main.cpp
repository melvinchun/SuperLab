#include <iostream>
#include "Persona.hpp"
#include "Persona_Adm.hpp"
#include "Investigador.hpp"
#include "Forense.hpp"
#include <string>
#include <vector>

using namespace std;
void agregar(int opcion2);

int main(int argc, char** argv[]){
	int opcion, opcion2;
	vector<Investigador> investigadores;
	vector<Forense> forenses;
	vector<Persona_adm> administradores;
	vector<Evidencia> evidencias;
	vector<Homicidio> homicidios;
	vector<Secuestro> secuestros;
	do{
		cout<<"*****MENÚ*****"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Modificar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Analizar Casos"<<endl;
		cout<<<"5. Salir"<<endl;
		cout<<<"Ingrese su opcion: ";
		cin>>opcion;

		if(opcion == 1){
			 cout<< "Que desea agregar?"<<endl;
			 cout<< "1. Persona"<<endl;
			 cout<< "2. Evidencia" <<endl;
			 cout<< "3. Casos" << endl;
			 cout<< "4. Salir"<<endl;
			 cin >>  opcion2;
			 agregar(opcion2);

		}else if(opcion == 2){
			 cout<< "Que desea modifcar?"<<endl;
			 cout<< "1. Persona" <<endl;
			 cout<< "2. Evidencia" << endl;
			 cout<< "3. Casos" << endl;
			 cout << "4. Salir" <<endl;
			 cin>> opcion2;
			
		}else if(opcion == 3){
			cout<<"Que desea eliminar?"<<endl;
			cout<<"1. Persona"<<endl;
			cout<<"2. Evidencia"<<endl:
			cout<<"3. Casos"<<endl;
			cout<<"4. Salir"<<endl;
			cin>> opcion2;
		}else if(opcion == 4){
			//Generar Reportes
		}
	}while(opcion != 5);
	return 0;
}


void agregar(int op){
	if(op==1){
		int opcion;
		cout<< "Que persona desea agregar?"<<endl;
		cout<< "1. Forense"<<endl;
		cout<< "2. Personal Administrativo" <<endl;
		cout<< "3. Investigador" << endl;
		cout<< "4. Salir"<<endl;
		cin >>  opcion;
		if(opcion==1){

		}else if(opcion==2){

		}else if(opcion==3){

		}else if(opcion==4){

		}else{

		}
	}else if(op==2){
		//Se piden los datos de Evidencia
		string nombre;
		string tipo;
		int tipo1;
		string lugar;
		bool huella;
		bool procesada;
		cout<< "Ingrese el nombre de la evidencia: ";
		getline (cin, nombre);
		do{
			cout<< "Tipos de armas"<<endl;
			cout<< "1. Arma Blanca"<<endl;
			cout<< "2. Arma de Fuego"<<endl;
			cout<< "3. Arma Circunstancial"<<endl;
			cout<<"Digite el tipo: ";
			cin>>tipo1;
			if(tipo1==1){
				tipo="arma blanca";
			}else if(tipo1==2){
				tipo="arma de fuego";
			}else if(tipo1==3){
				tipo="arma circunstancial";
			}else{
				tipo="opcion incorrecta";
			}
		}while(tipo1<0 || tipo1>3);
		cout<< "Ingrese el lugar de los hechos: ";
		getline (cin, lugar);
		do{
			cout<< "¿Se encontraron huellas?"<<endl;
			cout<< "1. Si"<<endl;
			cout<< "2. No"<<endl;
			cout<<"ingrese su opcion: ";
			cin>>tipo1;
			if(tipo1==1){
				huella=true;
			}else if(tipo1==2){
				huella=false;
			}else{
				tipo="opcion incorrecta";
			}
		}while(tipo1<0 || tipo1>2);
		do{
			cout<< "¿Fue procesada?"<<endl;
			cout<< "1. Si"<<endl;
			cout<< "2. No"<<endl;
			cout<<"ingrese su opcion: ";
			cin>>tipo1;
			if(tipo1==1){
				procesada=true;
			}else if(tipo1==2){
				procesada=false;
			}else{
				tipo="opcion incorrecta";
			}
		}while(tipo1<0 || tipo1>2);
		//Se agrega evidencia
		evidencias.push_back(new Evidencia(nombre, tipo, lugar, huella, procesada));
		cout<<"Se agregao exitosamente"<<endl;

	}else if(op==3){
		int opcion;
		cout<< "Que caso desea agregar?"<<endl;
		cout<< "1. Secuestro"<<endl;
		cout<< "2. Homicidio" <<endl;
		cout<< "3. Salir"<<endl;
		cin >>  opcion;
		if(opcion==1){
			int tipo1;
			string lugar;
			string motivo;
			string nombre_victima;
			bool rescate;
			double cantidad;
			int num_caso;
			string hora;
			string fecha;

			cout<< "Ingrese el lugar de los hechos: ";
			getline (cin, lugar);
			cout<< "Ingrese el motivo: ";
			getline (cin, motivo);
			cout<< "Ingrese el nombre de la victima: ";
			getline (cin, nombre_victima);
			do{
				cout<< "¿Se pidio rescate?"<<endl;
				cout<< "1. Si"<<endl;
				cout<< "2. No"<<endl;
				cout<<"ingrese su opcion: ";
				cin>>tipo1;
				if(tipo1==1){
					rescate=true;
				}else if(tipo1==2){
					rescate=false;
				}else{
					tipo="opcion incorrecta";
				}
			}while(tipo1<0 || tipo1>2);
			if(rescate){
				cout<< "¿Cual es el monto del rescate? ";
				cin>>cantidad;
			}else{
				cantidad=0;
			}

			cout<< "Ingrese el numero de caso: ";
			cin>>num_caso;
			cout<< "Ingrese la hora: ";
			getline (cin, hora);
			cout<< "Ingrese la fecha: ";
			getline (cin, fecha);
			secuestros.push_back(new Secuestro(lugar, motivo, nombre_victima, rescate, cantidad, num_caso, hora, fecha));
			cout<<"Se agregao exitosamente"<<endl;
		}else if(opcion==2){
			string nombre;
			string nombre_sospechoso;
			string nombre_victima;
			int num_caso;
			string hora;
			string fecha;
			cout<< "Ingrese el nombre: ";
			getline (cin, nombre);
			cout<< "Ingrese el nombre del principal sospechoso: ";
			getline (cin, nombre_sospechoso);
			cout<< "Ingrese el nombre de la victima: ";
			getline (cin, nombre_victima);
			cout<< "Ingrese el numero de caso: ";
			cin>>num_caso;
			cout<< "Ingrese la hora: ";
			getline (cin, hora);
			cout<< "Ingrese la fecha: ";
			getline (cin, fecha);
			homicidios.push_back(new Homicido(nombre, nombre_sospechoso, nombre_victima, num_caso, hora, fecha));
			cout<<"Se agregao exitosamente"<<endl;
		}else if(opcion==3){

		}else{

		}
	}else if(op==4){

	}else{
		cout<< "Opcion no valida"<<endl;
	}
}