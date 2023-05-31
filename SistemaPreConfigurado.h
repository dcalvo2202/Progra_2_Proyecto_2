#ifndef SISTEMAPRECONFIGURADO_H
#define SISTEMAPRECONFIGURADO_H
#include "Componente.h"
#include "PlantillaLista.h"

class SistemaPreConfigurado: public Componente { //Composite
private:
	Lista<Componente>* lista;

public:
	SistemaPreConfigurado();
	virtual ~SistemaPreConfigurado();
	virtual void obtenerPrecio();
	virtual string toString();
	virtual void add(Componente*);
};


#endif // !SISTEMAPRECONFIGURADO_H
