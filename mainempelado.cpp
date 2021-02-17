#include "Empleado.cpp"

#include <iostream>

using namespace std;
main (){
	
	string nombres,apellidos,direccion,puesto;
	
	int telefono, codigo_empleado,sueldo;
	
		cout<<"Ingrese codigo_empleado: ";

	cin>>codigo_empleado;

	cout<<"Ingrese Nombres: ";

	cin>>nombres;

	cout<<"Ingrese Apellidos: ";

	cin>>apellidos;

	cout<<"Ingrese Direccion: ";

	cin>>direccion;

	cout<<"Ingrese Telefono: ";

	cin>>telefono;
	
		cout<<"Ingrese Sueldo: ";

	cin>>sueldo;
	
		cout<<"Ingrese Puesto: ";

	cin>>puesto;
	
	// instanciar un objeto
	Empleado obj = Empleado(nombres,apellidos,direccion,puesto,telefono,codigo_empleado,sueldo);
	
	
	obj.mostrar();

	cout<<"Ingrese codigo_empleado: ";

	cin>>codigo_empleado;

	obj.setcodigo_empleado(codigo_empleado);

	obj.mostrar();
	
	
}
