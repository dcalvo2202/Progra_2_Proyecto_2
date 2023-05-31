#ifndef PARLANTE_H
#define PARLANTE_H
#include "Componente.h"

class Parlante : public Componente {
private:
	string categoria;
	string tipo;
	string caracteristicas;

public:
	Parlante();
	Parlante(string, string, string, string, double);
	virtual ~Parlante();
	virtual std::string toString() const;
	virtual double obtenerPrecio() const;
	virtual void agregar();
	string getCategoria() const;
	string getTipo() const;
	string getCaracteristicas() const;
	void setCategoria(string);
	void setTipo(string);
	void setCaracteristicas(string);

};

#endif // !PARLANTE_H
