#include "Parlante.h"

Parlante::Parlante() : Componente(), categoria{ "" }, tipo{ "" }, caracteristicas{ "" } {}
Parlante::Parlante(string cat, string tip, string car, string cod, double pre) : categoria{ cat }, tipo{ tip }, caracteristicas{ car } {
	codigo = cod;
	precio = pre;
}
Parlante::~Parlante() {}

string Parlante::toString() const {
	stringstream s;
	s << "Parlante: " << codigo << " " << precio << " " << categoria << " " << tipo << " " << caracteristicas << endl;
	return s.str();
}

double Parlante::obtenerPrecio() const {
	return precio;
}

void Parlante::agregar() { throw new string("No se supone que la clase parlante agregue."); }

string Parlante::getCategoria() const {
	return categoria;
}

string Parlante::getTipo() const {
	return tipo;
}

string Parlante::getCaracteristicas() const {
	return caracteristicas;
}

void Parlante::setCategoria(string categoria) {
	this->categoria = categoria;
}

void Parlante::setTipo(string componente) {
	this->tipo = componente;
}

void Parlante::setCaracteristicas(string caracteristicas) {
	this->caracteristicas = caracteristicas;
}