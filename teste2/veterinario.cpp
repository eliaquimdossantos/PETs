#include "veterinario.h"

Veterinario::Veterinario(){
	
}

Veterinario::Veterinario(Funcionario& f){
	Funcionario(f.getId(), f.getNome(), f.getCpf(), f.getIdade(), f.getTipoSanguineo(),
		f.getFatorRH(), f.getEspecialidade(), f.getFuncao());
}

Veterinario::Veterinario(string id_, string nome_, string cpf_, string idade_,  
	string tipoSanguineo_, string fatorRH_,  string especialidade_):
		Funcionario(id_,nome_,cpf_,idade_,tipoSanguineo_,fatorRH_,
			especialidade_, "Veterinario"){
					
}

Veterinario::~Veterinario(){}
