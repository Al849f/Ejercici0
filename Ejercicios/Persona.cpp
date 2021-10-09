#include <iostream>
using namespace std;
class persona{
	//atributos
	protected : string nombres,apellidos,direccion,fn;
				int telefono;
   //constructor
   protected :
   persona(){
	}
   persona(string nom,string ape,string dir,string f,int tel) {
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		fn = f;
		telefono = tel;
		
	}
	void agregar(){};
	
				
				
};
	
	
