#include "veterinario.h"

Veterinario::Veterinario(string id_, string nome_, string cpf_, string idade_,  string tipoSanguineo_, string fatorRH_,
					string especialidade_):Funcionario(id_,nome_,cpf_,idade_,tipoSanguineo_,fatorRH_,especialidade_){
					setFuncao("Veterinário");
}
Veterinario::~Veterinario(){}


std::ostream& Veterinario::imprimir(std::ostream &o) const{
	o << "Nome: "		    <<  nome    	   << endl 
	  << "ID: "	  			<<  id     	   << endl 
	  << "CPF: "  			<<  cpf    	   << endl 
	  << "Idade: " 			<<  idade   	   <<  endl 
	  << "Tipo sanguineo: " <<  tipoSanguineo << endl 
	  << "Fator RH: " 		<<  fatorRH	   << endl 
	  << "Função: " 			<<  funcao        << endl
	  << "Especialidade: "  <<  especialidade  << endl
	  << "------------------------------------------------------------";
	
	return o;
}
