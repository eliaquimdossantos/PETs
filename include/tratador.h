#ifndef TRATADOR_H
#define TRATADOR_H
#include "funcionario.h"

class Tratador : public Funcionario{

protected:
	string funcao;

public:
	Tratador(int id_, string nome_, string cpf_, int idade_,  string tipoSanguineo_, char fatorRH_,	string especialidade_);
	~Tratador();

	string getFuncao();
	void   setFuncao(string funcao_);
	
	std::ostream& imprimir(std::ostream &o) const;

};
#endif