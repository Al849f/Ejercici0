#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
string c_nit,c_nombres,c_apellidos,c_direccion,c_fn;
  	int c_telefono;
  	cout<<"Ingrese Nit:";
  	cin>>c_nit;
  	cout<<"Ingrese Nombres:";
  	cin>>c_nombres;
  	cout<<"Ingrese Apellidos:";
  	cin>>c_apellidos;
  	cout<<"Ingrese Direccion:";
  	cin>>c_direccion;
  	cout<<"Ingrese Telefono:";
  	cin>>c_telefono;
  	cout<<"Ingrese Fecha Nacimiento:";
  	cin>>c_fn;
  	// instancia de un objeto
  Cliente obj_c = Cliente(c_nombres,c_apellidos,c_direccion,c_fn,c_telefono,c_nit);
  obj_c.agregar();
    cout<<"Ingrese Nit:";
	cin>>c_nit;
	obj_c.setNit(c_nit);
	obj_c.agregar();
	cout<<obj_c.getNit()<<endl;
	// instanciar un objeto y utilizar get and set

/*	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	//obj.mostrar();
	cout<<"Nit: "<<obj.getNit()<<endl;
	cout<<"Nombres: "<<obj.getNombres()<<endl;
	cout<<"Apellidos: "<<obj.getApellidos()<<endl;
	cout<<"Direccion: "<<obj.getDireccion()<<endl;
	cout<<"Telefono: "<<obj.getTelefono()<<endl;
*/
};
