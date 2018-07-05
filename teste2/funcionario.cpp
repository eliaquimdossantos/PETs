#include "funcionario.h"

Funcionario::Funcionario(){}

Funcionario::Funcionario(string id_, string nome_, string cpf_, 
		string idade_, string tipoSanguineo_, string fatorRH_, 
			string especialidade_):
			id(id_),nome(nome_),cpf(cpf_),idade(idade_),
			tipoSanguineo(tipoSanguineo_),fatorRH(fatorRH_), 
			especialidade(especialidade_){

}

Funcionario::Funcionario(string id_, string nome_, string cpf_,
		string idade_,  string tipoSanguineo_, string fatorRH_, 
		string especialidade_, const string funcao_):
			id(id_),nome(nome_),cpf(cpf_),idade(idade_),
			tipoSanguineo(tipoSanguineo_),fatorRH(fatorRH_), 
			especialidade(especialidade_),funcao(funcao_){

}

Funcionario::~Funcionario(){}

string Funcionario::getFuncao(){
	return funcao;
}

void Funcionario::setFuncao(string funcao_){
	funcao = funcao_;
}


// getters
string Funcionario::getId(){
	return id;
}
string Funcionario::getNome(){
	return nome;
}
string Funcionario::getCpf(){
	return cpf;
}

string Funcionario::getIdade(){
	return idade;
}
string Funcionario::getTipoSanguineo(){
	return tipoSanguineo;
}
string Funcionario::getFatorRH(){
	return fatorRH;
}
string Funcionario::getEspecialidade(){
	return especialidade;
}
		
// Setters
void Funcionario::setId(string id_){
	id = id_;
}
void Funcionario::setNome(string nome_){
	nome = nome_;
}
void Funcionario::setCpf(string cpf_){
	cpf = cpf_;
}
void Funcionario::setIdade(string idade_){
	idade = idade_;
}
void Funcionario::setTipoSanguineo(string tipoSanguineo_){
	tipoSanguineo =  tipoSanguineo_;
}
void Funcionario::setFatorRH(string fatorRH_){
	fatorRH = fatorRH_;
}
void Funcionario::setEspecialidade(string especialidade_){
	especialidade = especialidade_;
}

bool operator== (Funcionario &f1, Funcionario &f2){
	   	return (f1.cpf == f2.cpf );
}

std::ostream& Funcionario::imprimir(std::ostream &o) const{
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

string Funcionario::gerarCSV(Funcionario &f){
	string aux =f.id +";"+f.funcao+";"+f.nome+";"+f.cpf+";"+f.idade+";"+f.tipoSanguineo+";"+f.fatorRH+";"+f.especialidade+"\n";
	return aux;
}

std::ostream& operator<< (std::ostream &o, Funcionario const &f) {
	return f.imprimir(o);
}

std::istream& operator>> (std::istream &i, Funcionario &f){
	getline(i, f.id, ';');
	getline(i, f.funcao, ';');
	getline(i, f.nome, ';');
	getline(i, f.cpf, ';');
	getline(i, f.idade, ';');
	getline(i, f.tipoSanguineo, ';');
	getline(i, f.fatorRH, ';');
	getline(i, f.especialidade );
	//1;Tratador;Daniel Oscar;123.456.789-10;30;O;+;Felinos		    
	    
	return i;	
}
