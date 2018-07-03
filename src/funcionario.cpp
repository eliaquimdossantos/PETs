#include "funcionario.h"

Funcionario::Funcionario(int id_, string nome_, string cpf_, int idade_,  string tipoSanguineo_, char fatorRH_, string especialidade_):
						id(id_),nome(nome_),cpf(cpf_),idade(idade_),tipoSanguineo(tipoSanguineo_),fatorRH(fatorRH_), especialidade(especialidade_){}

Funcionario::~Funcionario(){}


// getters
int Funcionario::getId(){
	return id;
}
string Funcionario::getNome(){
	return nome;
}
string Funcionario::getCpf(){
	return cpf;
}

int Funcionario::getIdade(){
	return idade;
}
string Funcionario::getTipoSanguineo(){
	return tipoSanguineo;
}
char Funcionario::getFatorRH(){
	return fatorRH;
}
string Funcionario::getEspecialidade(){
	return especialidade;
}
		
// Setters
void Funcionario::setId(int id_){
	id = id_;
}
void Funcionario::setNome(string nome_){
	nome = nome_;
}
void Funcionario::setCpf(string cpf_){
	cpf = cpf_;
}
void Funcionario::setIdade(int idade_){
	idade = idade_;
}
void Funcionario::setTipoSanguineo(string tipoSanguineo_){
	tipoSanguineo =  tipoSanguineo_;
}
void Funcionario::setFatorRH(char fatorRH_){
	fatorRH = fatorRH_;
}
void Funcionario::setEspecialidade(string especialidade_){
	especialidade = especialidade_;
}

bool operator== (Funcionario &f1, Funcionario &f2){
	   	return (f1.cpf == f2.cpf );
}

std::ostream& operator<< (std::ostream &o, Funcionario const &f) {
	return f.imprimir(o);
}