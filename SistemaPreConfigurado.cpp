#include "SistemaPreConfigurado.h"


SistemaPreConfigurado::SistemaPreConfigurado() : Componente() {
	lista = new Lista<Componente>();
}

SistemaPreConfigurado::~SistemaPreConfigurado() {
}

void SistemaPreConfigurado::obtenerPrecio() {
}

string SistemaPreConfigurado::toString() {
	return " ";
}

void SistemaPreConfigurado::add(Componente* c) {
	if (lista->getCan() >= 3) {
		throw new std::string("No se pueden agregar mas componentes.");
	}
	else {
		lista->insertarFinal(c);
	}
}


