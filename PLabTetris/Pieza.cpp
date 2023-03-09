#include "Pieza.h"
Pieza::Pieza()
{
	nombre = "Sin nombre";
	forma = "Cuadrado pequeño";
	posicion_X = 100;
	posicion_Y = 50;
	color = "#FFFFFF";
	velocidad = 0.01f;
	enMovimiento = true;

}

Pieza::Pieza(string _nombre, string _color)
{
	nombre = _nombre;
	forma = "Cuadrado pequeño";
	posicion_X = 100;
	posicion_Y = 50;
	color = _color;
	velocidad = 0.01f;
	enMovimiento = true;

}

Pieza::Pieza(float _velocidad) :velocidad(_velocidad)
{
	nombre = "Sin nombre";
	forma = "Cuadrado pequeño";
	posicion_X = 100;
	posicion_Y = 50;
	color = "#FFFFFF";
	enMovimiento = true;

}


void Pieza::rotar(int _angulo)
{
	cout << "Funcion rotar: Esta funcion rota una figura" << endl;
}

void Pieza::acelerar(float _velocidad)
{
	cout << "Funcion velodidad: Esta funcion incrementa la velocidad de caida de una figura" << endl;
}

void Pieza::moverHorizontalmente(int _direccion)
{
	cout << "Funcion direccion: Esta funcion permite mover la figurar hacia la derecha o izquierda." << endl;
}