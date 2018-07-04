#ifndef TRATADOR_H
#define TRATADOR_H
#include "funcionario.h"

class Tratador : public Funcionario{

public:
	Tratador(string id_, string nome_, string cpf_, string idade_,  string tipoSanguineo_, string fatorRH_,	string especialidade_);
	~Tratador();

};
#endif