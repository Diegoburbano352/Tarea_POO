#include "Persona.cpp"

#include <iostream>

using namespace std;

class Empleado : Persona{
	
	// atributos
	 private : int codigo_empleado,sueldo;
	 string puesto;
	 
	 // constructor
	 public:
	 	Empleado(){
		 }
		 Empleado(string nom,string ape,string dir,string pue,int tel, int codemp,int suel): Persona(nom,ape,dir,tel){
		 codigo_empleado = codemp;
		 sueldo = suel;
		 puesto = pue;
		 }
		 
	// Metodos 
	// Set
	
void setNombres(string nom){nombres = nom;}

void setApellidos(string ape){apellidos = ape;}

void setDireccion(string dir){direccion = dir;}

void setTelefono(int tel){telefono = tel;}

void setcodigo_empleado(int codemp ){codigo_empleado = codemp;}

void setsueldo(int suel){sueldo = suel;}

void setpuesto(string pue){puesto = pue;}

// get

string getNombres(){	return nombres;}

string getApellidos(){	return apellidos;}

string getDireccion(){	return direccion;}

int getTelefono(){	return telefono;}

string getpuesto(){ return puesto;}

int getCodigo_empleado(){ return codigo_empleado;}

int getSueldo(){ return sueldo;}

// metodo
void mostrar(){

	cout<<"________"<<endl;

	cout<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<codigo_empleado<<","<<sueldo<<","<<puesto<<endl;

}

	
	
}; 
