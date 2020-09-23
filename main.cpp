#include <iostream>
#include "MetodoBiseccion.h"
using namespace std;

/*  
	Autor: Edgard Diaz
	
	E#ste programa realiza  la aproximación de las raciones de una funcion  utilizando el metodo de biseccion
*/



int main(int argc, char** argv) 
{
	double a, b; 

	//ingresar por teclado los parametros del rango de busqueda de la raiz
	cout<<"ingrese los intervalos a  y b: \n";
	cin>>a>>b;
	
	MetodoBiseccion P(a, b); //inicializador del objeto de la clase MetodonBiseccion
	
	P.Aproximar_raiz(); //Invocar el metodo de la clase responsable de realizar la aproximacion de la raiz
	
	return 0;
}
