#include <iostream>
#include "Pieza.h"
#include "PiezaMutante.h"
#include "Escenario.h"

using namespace std;

int main() {
	Pieza pieza_l("PIEZAS (ELE)", "#000000");

	cout << pieza_l.getNombre() << endl;
	pieza_l.setNombre(" L de cuatro tiles");
	pieza_l.rotar(90);
	pieza_l.acelerar(50.f);
	pieza_l.moverHorizontalmente(3);
	cout << "nombre de la pieza:" << pieza_l.getNombre() << endl;
	cout << "color de la pieza: " << pieza_l.getColor() << endl;
	cout << "--------------------------" << endl;

	PiezaMutante pieza_m("Pieza mutante sin nombre exp", " #OOOO66", 5, false);

	cout << "PIEZA MUTANTE" << endl;
	cout << "numero de copias: " << pieza_m.getNumeroCopias() << endl;
	cout << "modificar forma?: " << pieza_m.getModificarForma() << endl;
	cout << "color de la pieza mutante" << pieza_m.getColor() << endl;
	cout << pieza_m.getNombre() << endl;
	pieza_m.setNombre("Pieza mutante L de cuatro tiles");
	pieza_m.rotar(90);
	cout << pieza_m.getNombre() << endl;
	pieza_m.cambiarForma(2);
	pieza_m.detenerPieza(3);
	pieza_m.copiarPieza(5);
	cout << "----------------------------" << endl;

	Escenario escenario_j("Tablero de juego", "#00111");

	cout << "ESCENARIO-TABLERO" << endl;
	cout << "Nombre del tablero:" << escenario_j.getNombre() << endl;
	cout << "Color del tablero:" << escenario_j.getColor() << endl;
	escenario_j.tamaño(4, 5);
}
