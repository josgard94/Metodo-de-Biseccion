
/*
	Autor: Edgard Diaz
	El programa realiza la aproximacion de la raiz de una funcion utilizando el metodo de biseccion
*/

#include "MetodoBiseccion.h"
#include<cmath> //libreria para utilizar funciones como pow o sin//
#include<iostream> 
#include <iomanip> 
using namespace std;
//contrucctor de la clase inicializa el intervalo de busqueda.
MetodoBiseccion::MetodoBiseccion(double a, double b){
	this->a = a;
	this->b = b;	
}
MetodoBiseccion::~MetodoBiseccion(){
}

double MetodoBiseccion::punto_medio(double a, double b)
{
	return (a+b)/2;  // retorna el valor del punto medio a partir del intervalo dado por el usario
}

double MetodoBiseccion::funcion(double x)
{
	return pow(x,3) + 4 * pow(x,2) - 10;
	//return pow(x,5) - pow(x,2) + 1; //funcion a evaluar
	//return pow(x,3)-(pow(x,2)/2) - 3*x + 2;
}

//Logica del  metodo de biseccion
double MetodoBiseccion::Aproximar_raiz()
{
	int  n = 1, iter = 1000; //numero de iteraciones maximas que reralizara el programa para encontrar la raiz aproximada
	do
	{
		this->c = punto_medio(this->a, this->b); //calcular el punto  medio a partir del intervalo [a,b]
		
		if(n > iter) //criterio de parada, si n supera el maximo de iteraciones el programa no converge
		{
			//indicar al usuario que con el interbalo dado  no se encontro una raiz
			cout<<"El programa no converge"<<endl;
			break;
		}
		else
		{
			//criterio de paro
			if (abs(funcion(this->c)) <= 0.001) // Tolerancia de error  entre mas cercano a cero se tiene mas presicion de la raiz calculda
			{
				//imprimir el resultado de la proximacion
				cout<<setprecision(5)<<"*Raiz aproximada: "<<this -> c<<" Error absoluto: "<< abs(funcion(this -> c))<<" Iteraciones realizadas: "<< n;
				break;
			}
			else
			{
				//criterio de asignacion  para el nuevo intervlo [a,b]
				if(funcion(this->c) * funcion(this->a)> 0)
				{
					this->a = this->c; // se asigna punto medio ha a y b no cambia
				}
				else if(funcion(this->c) * funcion(this->b)> 0)
				{
					this->b = this->c; //se asigna el punto medio a b y a no cambia
				}
			}
		}
		n++; //incrementar el  contador de iteraciones
		
	}while(true);
	
	return 0;
}
