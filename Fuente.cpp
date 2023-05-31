#include "Fuente.h"

Fuente::Fuente() : Componente(), categoria{ "" }, tipo{ "" }, caracteristicas{ "" } {}
Fuente::Fuente(string cat, string tip, string car, string cod, double pre) : categoria{ cat }, tipo{ tip }, caracteristicas{ car } {
	codigo = cod;
	precio = pre;
}
Fuente::~Fuente() {}

string Fuente::toString() const {
	stringstream s;
	s << "Fuente: " << codigo << " " << precio << " " << categoria << " " << tipo << " " << caracteristicas << endl;
	return s.str();
}

double Fuente::obtenerPrecio() const {
	return precio;
}

void Fuente::agregar() { throw new string("No se supone que la clase fuente agregue."); }

string Fuente::getCategoria() const {
	return categoria;
}

string Fuente::getTipo() const {
	return tipo;
}

string Fuente::getCaracteristicas() const {
	return caracteristicas;
}

void Fuente::setCategoria(string categoria) {
	this->categoria = categoria;
}

void Fuente::setTipo(std::string componente) {
	this->tipo = componente;
}

void Fuente::setCaracteristicas(string caracteristicas) {
	this->caracteristicas = caracteristicas;
}
