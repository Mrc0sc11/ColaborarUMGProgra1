#include "Persona.cpp"
#include  <iostream>


using namespace std;

class Cliente : Persona{
	private ;
	string nit;
	
	//metodos (constuctor y metodos crud)
	public;
	     Cliente(){
	     }
	     	Cliete(string nom,sting ape,sting dir,int tel,sting fn,sting n): Persona(nom,ape,dir,tel,fn){
	     		nit = n;
	     		
			 }
		void leer(){
			cout<< "nit: " nit <<endl;
			cout<<"nombres: " nombre <<endl;
			cout<< "apelidos:" apellidos <<endl;
			cout<< "direccion:" direccion <<endl;
			cout<< "telefono :" telefono <<endl;
			cout<< "fecha nacimiento:" fecha_nacimiento <<endl;
		}
)
