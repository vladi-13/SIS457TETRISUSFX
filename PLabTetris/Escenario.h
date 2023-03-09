#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Escenario
{
private:
	string Nombre;
	string Color;
	vector <int> tablerojuego;
	int Altura;
	int Ancho;
	string Forma;


public:
	Escenario();
	Escenario(string _Nombre, string _Color);

	string getNombre() { return Nombre; }
	void setNombre(string _Nombre) { Nombre = _Nombre; }

	string getColor() { return Color; }
	void serColor(string _Color) { Color = _Color; }

	void tamaño(int Ancho, int Altura);

protected:

};

