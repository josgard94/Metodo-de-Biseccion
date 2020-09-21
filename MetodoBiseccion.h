/*
	Autor: Edgard Diaz
*/
#ifndef METODOBISECCION_H
#define METODOBISECCION_H

class MetodoBiseccion
{
	public:
		MetodoBiseccion(double a, double b);//constructor
		~MetodoBiseccion(); //destructor
		double funcion(double x); //evalua x en la funcion dada
		double punto_medio(double a, double b); // calcula el punto medio apartir del  rango [a,b]
		double Aproximar_raiz(); //logica del metodo de biseccion
		
	private:
		//variables de acceso privado de la clase
		double a; //punto inicial a del intervalo [a , b]
		double b; //punto inicial b del intervalo [a, b]
		double c; //Variable usada para asignar el punto medio  del intervalo [a, b]
};

#endif
