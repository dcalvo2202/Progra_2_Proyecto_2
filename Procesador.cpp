#include "Procesador.h"

Procesador::Procesador() : Componente(), categoria{ "" }, tipo{ "" }, caracteristicas{ "" } {}
Procesador::Procesador(string cat, string tip, string car, string cod, double pre) : categoria{ cat }, tipo{ tip }, caracteristicas{ car } {
	codigo = cod;
	precio = pre;
}
Procesador::~Procesador() {}

string Procesador::toString() const {
	stringstream s;
	s << "Procesador: " << codigo << " " << precio << " " << categoria << " " << tipo << " " << caracteristicas << endl;
	return s.str();
}

double Procesador::obtenerPrecio() const {
	return precio;
}

void Procesador::agregar() { throw new string("No se supone que la clase procesador agregue."); }

string Procesador::getCategoria() const {
	return categoria;
}

string Procesador::getTipo() const {
	return tipo;
}

string Procesador::getCaracteristicas() const {
	return caracteristicas;
}

void Procesador::setCategoria(string categoria) {
	this->categoria = categoria;
}

void Procesador::setTipo(string componente) {
	this->tipo = componente;
}

void Procesador::setCaracteristicas(string caracteristicas) {
	this->caracteristicas = caracteristicas;
}


