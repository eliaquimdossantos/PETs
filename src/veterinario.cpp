#include "veterinario.h"

Veterinario::Veterinario(int id_, string nome_, string cpf_, int idade_,  string tipoSanguineo_, char fatorRH_,
					string especialidade_):Funcionario(id_,nome_,cpf_,idade_,tipoSanguineo_,fatorRH_,especialidade_), funcao("Veterinário"){}
Veterinario::~Veterinario(){}


string Veterinario::getFuncao(){
	return funcao;
}

void Veterinario::setFuncao(string funcao_){
	funcao = funcao_;
}

std::ostream& Veterinario::imprimir(std::ostream &o) const{
	o << "Nome: "		    <<  nome    	   << endl 
	  << "ID: "	  			<<  id     	   << endl 
	  << "CPF: "  			<<  cpf    	   << endl 
	  << "Idade: " 			<<  idade   	   <<  endl 
	  << "Tipo sanguineo: " <<  tipoSanguineo << endl 
	  << "Fator RH: " 		<<  fatorRH	   << endl 
	  << "Função: " 			<<  funcao        << endl
	  << "Especialidade: "  <<  especialidade  << endl
	  << "------------------------------------------------------------"				<< endl ;
	
	return o;
}
