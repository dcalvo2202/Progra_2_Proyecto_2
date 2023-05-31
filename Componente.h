#ifndef COMPONENTE_H
#define COMPONENTE_H
#include <sstream>
using namespace std;

class Componente { //<<Abs>>
protected:
	string codigo; //Modelo
	double precio;

public:
	Componente() : codigo{ "" }, precio{ 0.0 } {}
	virtual ~Componente(){}
	virtual string toString() const = 0;
	virtual double obtenerPrecio() const = 0;
	virtual void agregar() = 0;

};


#endif // !COMPONENTE_H
