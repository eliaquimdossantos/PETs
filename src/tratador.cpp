#include "tratador.h"

Tratador::Tratador(int id_, string nome_, string cpf_, int idade_,  string tipoSanguineo_, char fatorRH_,
					string especialidade_):Funcionario(id_,nome_,cpf_,idade_,tipoSanguineo_,fatorRH_,especialidade_), funcao("Tratador"){}
Tratador::~Tratador(){}