#ifndef VETERINARIO_H
#define VETERINARIO_H
#include "funcionario.h"


class Veterinario : public Funcionario{

protected:
	string funcao;
	
public:
	Veterinario(int id_, string nome_, string cpf_, int idade_,  string tipoSanguineo_, char fatorRH_,	string especialidade_);
	~Veterinario();	

	string getFuncao();
	void   setFuncao(string funcao_);

	std::ostream& imprimir(std::ostream &o) const;

};
#endif