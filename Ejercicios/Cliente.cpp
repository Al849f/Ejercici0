#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : persona{
	private: string nit;
	// constructor
	public :
		Cliente(){
		}
	    Cliente (string nom,string ape,string dir,string f,int tel, string n): persona(nom, ape,dir,f,tel){
		nit = n;
	}
     void agregar(){
			cout<<"____________________"<<endl;
			cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fn<<","<<telefono<<endl;
		}
// set (modificar los atributos de una clase)
void setNit(string n){nit = n;}
void setNombres(string nom){nombres = nom;}
void setApellidos(string ape){apellidos = ape;}
void setDireccion(string dir){direccion = dir;}
void setTelefono(int tel){telefono = tel;}
void setFn(string f){fn = f;}

// get (mostrar los atributros de una clase)
string getNit(){return nit;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getDireccion(){return direccion;}
int getTelefono(){return telefono;}
string getFn(){return fn;}
};
