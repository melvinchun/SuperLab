#include <iostream>
#include "Persona.hpp"
#include "Persona_Adm.hpp"
#include "Investigador.hpp"
#include "Forense.hpp"
#include "Evidencia.hpp"
#include "Casos.hpp"
#include "Homicidio.hpp"
#include "Secuestro.hpp"
#include <string>
#include <vector>

using namespace std;
using std::vector;
using std::string;
void agregar(int op, vector<Persona>& lista_persona, vector<Evidencia>& evidencias, vector<Homicidio>& homicidios, vector<Secuestro>& secuestros);
//void validar(vector<Persona>& lista_persona, vector<Evidencia>& evidencias, vector<Homicidio>& homicidios, vector<Secuestro>& secuestros);

int main(int argc, char const *argv[]){
	int opcion, opcion2;
	vector<Persona> lista_persona;
	vector<Evidencia> evidencias;
	vector<Homicidio> homicidios;
	vector<Secuestro> secuestros;
	do{
		cout<<"*****MENÚ*****"<<endl;
		cout<<"1. Agregar"<<endl;
		cout<<"2. Modificar"<<endl;
		cout<<"3. Eliminar"<<endl;
		cout<<"4. Analizar Casos"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;

		if(opcion == 1){
			 cout<< "Que desea agregar?"<<endl;
			 cout<< "1. Persona"<<endl;
			 cout<< "2. Evidencia" <<endl;
			 cout<< "3. Casos" << endl;
			 cout<< "4. Agregar evidencias a caso"<<endl;
			 cout<< "5. Agregar investigadores a caso"<<endl;
			 cout<< "6. Salir"<<endl;
			 cin >>  opcion2;
			 agregar(opcion2, lista_persona, evidencias, homicidios, secuestros);

		}else if(opcion == 2){
			 cout<< "Que desea agregar?"<<endl;
			 cout<< "1. Persona"<<endl;
			 cout<< "2. Evidencia" <<endl;
			 cout<< "3. Casos" << endl;
			 cout<< "4. Agregar evidencias a caso"<<endl;
			 cout<< "5. Agregar investigadores a caso"<<endl;
			 cout<< "6. Salir"<<endl;
			 cin >>  opcion2;
			 agregar(opcion2, lista_persona, evidencias, homicidios, secuestros);
			
		}else if(opcion == 3){
			cout<<"Que desea eliminar?"<<endl;
			cout<<"1. Persona"<<endl;
			cout<<"2. Evidencia"<<endl;
			cout<<"3. Casos"<<endl;
			cout<<"4. Salir"<<endl;
			cin>> opcion2;
		}else if(opcion == 4){
			//Generar Reportes
		}
	}while(opcion != 5);
	return 0;
}


void agregar(int op, vector<Persona>& lista_persona, vector<Evidencia>& evidencias, vector<Homicidio>& homicidios, vector<Secuestro>& secuestros){
	if(op==1){
		int opcion;
		string nombre;
		string usuario;
		string contraseña;
		int edad;
		string id;
		string fecha_nacimiento;
		cout<< "Que persona desea agregar?"<<endl;
		cout<< "1. Forense"<<endl;
		cout<< "2. Personal Admninistrativo" <<endl;
		cout<< "3. Investigador" << endl;
		cout<< "4. Salir"<<endl;
		cin >>  opcion;
		if(opcion==1){
			string f_ingreso, horario;
			cout<<"Ingrese nombre: "<<endl;
			getline(cin, nombre);
			cout << "Ingrese usuario: "<<endl;
			getline(cin, usuario);
			cout << "Ingrese contraseña: " <<endl;
			getline(cin, contraseña);
			cout << "Ingrese edad: " <<endl;
			cin>>edad;
			cout << "Ingrese cedula id: "<<endl;
			getline(cin, id);
			cout << "Ingrese fecha de nacimiento: "<<endl;
			getline(cin, fecha_nacimiento);
			cout << "Ingrese su fecha de ingreso: "<<endl;
			getline(cin, f_ingreso);
			cout << "Ingrese su horario: "<< endl;
			getline(cin, horario);
			lista_persona.push_back(Forense(f_ingreso, horario, nombre, usuario, contraseña, id, fecha_nacimiento, edad));
		}else if(opcion==2){
			string clave, puesto;
			cout<<"Ingrese nombre: "<<endl;
			getline(cin, nombre);
			cout << "Ingrese usuario: "<<endl;
			getline(cin, usuario);
			cout << "Ingrese contraseña: " <<endl;
			getline(cin, contraseña);
			cout << "Ingrese edad: " <<endl;
			cin >> edad;
			cout << "Ingrese cedula id: "<<endl;
			getline(cin, id);
			cout << "Ingrese fecha de nacimiento: "<<endl;
			getline(cin, fecha_nacimiento);
			cout << "Ingrese su clave de ingreso: "<<endl;
			getline(cin, clave);
			cout<<"Ingrese su puesto: "<<endl;
			getline(cin, puesto);
			lista_persona.push_back(Persona_Adm(clave, puesto, nombre, usuario, contraseña,edad, id, fecha_nacimiento));
		}else if(opcion==3){
			int atendidos, cerrados, sin_resolver;
			cout<<"Ingrese nombre: "<<endl;
			getline(cin, nombre);
			cout << "Ingrese usuario: "<<endl;
			getline(cin, usuario);
			cout << "Ingrese contraseña: " <<endl;
			getline(cin, contraseña);
			cout << "Ingrese edad: " <<endl;
			cin >> atendidos;
			cout << "Ingrese cedula id: "<<endl;
			getline(cin, id);
			cout << "Ingrese fecha de nacimiento: "<<endl;
			getline(cin, fecha_nacimiento);
			cout << "Ingrese el numero de casos atendidos: "<<endl;
			cin >> atendidos;
			cout << "Ingrese el numero de casos cerrados: "<<endl;
			cin >> cerrados;
			cout << "Ingrese el numero de casos sin resolver: "<<endl;
			cin >> sin_resolver;
			lista_persona.push_back(Investigador(atendidos, cerrados, sin_resolver, nombre, usuario, contraseña, id,fecha_nacimiento, edad));
		}else if(opcion==4){
			cout<<endl;
		}else{
			cout<<"Opcion Invalida"<<endl;
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
		evidencias.push_back(Evidencia(nombre, tipo, lugar, huella, procesada));
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
			secuestros.push_back(Secuestro(lugar, motivo, nombre_victima, rescate, cantidad, num_caso, hora, fecha));
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
			homicidios.push_back(Homicidio(nombre, nombre_sospechoso, nombre_victima, num_caso, hora, fecha));
			cout<<"Se agregao exitosamente"<<endl;
		}else if(opcion==3){

		}else{

		}
	}else if(op==4){
		int opcion;
		cout<< "A que caso desea agregar?"<<endl;
		cout<< "1. Secuestro"<<endl;
		cout<< "2. Homicidio" <<endl;
		cout<< "3. Salir"<<endl;
		cin >>  opcion;
		if(opcion==1){
			int selec1;
			for (int i = 0; i < secuestros.size(); ++i){
				cout<<i<<". "<<secuestros[i].getNum_caso()<<endl;
			}
			cout<<"Escoja un caso: ";
			cin>>selec1;
			int selec;
			for (int i = 0; i < evidencias.size(); ++i){
				cout<<evidencias[i].getNombre()<<endl;
			}
			cout<<"Escoja una evidencia: ";
			cin>>selec;
			secuestros[selec1].addEvidencia((evidencias[selec]));
			evidencias.erase(evidencias.begin()+selec);
		}else if(opcion==2){
			int selec1;
			for (int i = 0; i < homicidios.size(); ++i){
				cout<<i<<". "<<homicidios[i].getNum_caso()<<endl;
			}
			cout<<"Escoja un caso: ";
			cin>>selec1;
			int selec;
			for (int i = 0; i < evidencias.size(); ++i){
				cout<<evidencias[i].getNombre()<<endl;
			}
			cout<<"Escoja una evidencia: ";
			cin>>selec;
			homicidios[selec1].addEvidencia((evidencias[selec]));
			evidencias.erase(evidencias.begin()+selec);
		}
	}else if(op==5){
		int opcion;
		cout<< "A que caso desea agregar?"<<endl;
		cout<< "1. Secuestro"<<endl;
		cout<< "2. Homicidio" <<endl;
		cout<< "3. Salir"<<endl;
		cin >>  opcion;
		if(opcion==1){
			int selec1;
			for (int i = 0; i < secuestros.size(); ++i){
				cout<<i<<". "<<secuestros[i].getNum_caso()<<endl;
			}
			cout<<"Escoja un caso: ";
			cin>>selec1;
			int selec;
			for (int i = 0; i < lista_persona.size(); ++i){
				cout<<lista_persona[i].getNombre()<<endl;
			}
			cout<<"Escoja una investigador: ";
			cin>>selec;
			Persona* p= new Persona(lista_persona[selec]);
			Investigador* temp=static_cast<Investigador*>(p);
			if(temp!=NULL){
				(secuestros[selec1]).addInvestigador(*temp);
				lista_persona.erase(lista_persona.begin()+selec);
			}
		}else if(opcion==2){
			int selec1;
			for (int i = 0; i < homicidios.size(); ++i){
				cout<<i<<". "<<homicidios[i].getNum_caso()<<endl;
			}
			cout<<"Escoja un caso: ";
			cin>>selec1;
			int selec;
			for (int i = 0; i < lista_persona.size(); ++i){
				cout<<lista_persona[i].getNombre()<<endl;
			}
			cout<<"Escoja una evidencia: ";
			cin>>selec;
			Persona* p= new Persona(lista_persona[selec]);
			Investigador* temp=static_cast<Investigador*>(p);
			if(temp!=NULL){
				(homicidios[selec1]).addInvestigador(*temp);
				lista_persona.erase(lista_persona.begin()+selec);
			}
		}
	}else{
		cout<< "Opcion no valida"<<endl;
	}
}

/*void validar(vector<Persona>& lista_persona, vector<Evidencia>& evidencias, vector<Homicidio>& homicidios, vector<Secuestro>& secuestros){
	string usuario, contraseña;
	cout<<"Ingrese su usuario"<<endl;
	cin >> usuario;
	cout << "Ingrese su contraseña"<<endl;
	cin >> contraseña;


}
*/