#ifndef PROCESADOR_H
#define PROCESADOR_H
#include "Componente.h"

class Procesador : public Componente {
private:
	string categoria;
	string tipo;
	string caracteristicas;

public:
	Procesador();
	Procesador(string, string, string, string, double);
	virtual ~Procesador();
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

#endif // !PROCESADOR_H
