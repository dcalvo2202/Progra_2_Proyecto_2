#ifndef FUENTE_H
#define FUENTE_H
#include "Componente.h"

class Fuente: public Componente {
private:
	string categoria;
	string tipo;
	string caracteristicas;

public:
	Fuente();
	Fuente(string, string, string, string, double);
	virtual ~Fuente();
	virtual string toString() const;
	virtual double obtenerPrecio() const;
	virtual void agregar();
	string getCategoria() const;
	string getTipo() const;
	string getCaracteristicas() const;
	void setCategoria(string);
	void setTipo(string);
	void setCaracteristicas(string);

};

#endif // !FUENTE_H
