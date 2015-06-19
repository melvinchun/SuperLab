#include <iostream>
#include <string>
using namespace std;

int ingresar(string usuario, string pass, Persona& persona);

int main(int argc, char const *argv[]){
	vector<Persona> personas;
	int op;
	cout<<"MENU\n1.Agregar Persona\n2.Ingresar\n3.Salir\nIngrese su opcion: "
	cin<<op;
	if(op==1){

	}else if(op==2){
		string usuario;
		string pass;
		ingresar(usuario, pass, personas);
	}else if(op==3){

	}

	return 0;
}

int ingresar(string usuario, string pass, vector<Persona>& personas){
	if(personas.getUsuario()==usuario && personas.getPass()==pass){
		
	}
}