#include "Escenario.h"

Escenario::Escenario()
{
	Nombre = "Tablero Tetris";
	Forma = "Rectangular";
	Color = "#00066";
}

Escenario::Escenario(string _Nombre, string _Color) :Nombre(_Nombre), Color(_Color)
{
	Nombre = _Nombre;
	Forma = "Rectangular";
	Color = _Color;
}

void Escenario::tama�o(int Ancho, int Altura)
{
	cout << "Este metodo permite mostrar el tama�o del tablero" << endl;
}