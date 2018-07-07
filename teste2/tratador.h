#ifndef TRATADOR_H
#define TRATADOR_H
#include "funcionario.h"

class Tratador : protected Funcionario{

public:
	Tratador();
	Tratador(Funcionario& f);
	Tratador(string id_, string nome_, string cpf_, string idade_,  string tipoSanguineo_, string fatorRH_,	string especialidade_);
	~Tratador();

};
#endif