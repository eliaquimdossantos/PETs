#ifndef VETERINARIO_H
#define VETERINARIO_H
#include "funcionario.h"


class Veterinario : public Funcionario{

public:
	Veterinario();
	Veterinario(Funcionario& f);
	Veterinario(string id_, string nome_, string cpf_, string idade_,  string tipoSanguineo_, string fatorRH_,	string especialidade_);
	~Veterinario();

};
#endif