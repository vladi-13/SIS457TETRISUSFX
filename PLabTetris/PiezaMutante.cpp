#include "PiezaMutante.h"
PiezaMutante::PiezaMutante(int _numeroCopias, bool _modificarForma)
{
	numeroCopias = _numeroCopias;
	modificarForma = _modificarForma;
	color = "#6666FF";
	setNombre("sin nombre pieza mutante");
}

PiezaMutante::PiezaMutante(string _nombre, string _color,
	int _numeroCopias, bool _modificarForma) :Pieza(_nombre, _color),
	numeroCopias(_numeroCopias), modificarForma(_modificarForma)
{
}

void PiezaMutante::copiarPieza(int _numeroCopias)
{
	cout << "Funcion CopiarPieza: Esta funcion permite copiar una pieza el numero de veces que se requiera" << endl;
}

void PiezaMutante::detenerPieza(int _tiempo)
{
	cout << "Funcion DetenerPieza: Esta funcion permite detener el movimiento y rotacion de una pieza" << endl;
}

void PiezaMutante::cambiarForma(int _nuevaForma)
{
	cout << "Funcion CambiarForma: Esta funcion permite cambiar la forma de una pieza." << endl;
}