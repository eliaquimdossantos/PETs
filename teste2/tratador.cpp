#include "tratador.h"

Tratador::Tratador(){

}

Tratador::Tratador(Funcionario& f){
	Funcionario(f.getId(), f.getNome(), f.getCpf(), f.getIdade(), f.getTipoSanguineo(),
		f.getFatorRH(), f.getEspecialidade(), f.getFuncao());
}

Tratador::Tratador(string id_, string nome_, string cpf_, string idade_,  
		string tipoSanguineo_, string fatorRH_,
		string especialidade_):Funcionario(id_,nome_,cpf_,idade_,tipoSanguineo_,
		fatorRH_,especialidade_, "Tratador"){
					
}
Tratador::~Tratador(){}
