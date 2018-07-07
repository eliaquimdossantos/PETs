/**
 * @file animal.cpp
 * @brief Implementação da classe Animal
 */

#include "animal.h"
#include <sstream>

Animal::Animal() {

}

Animal::Animal(int id_, string classe_, string nome_, string cientifico_, string sexo_, float tamanho_,
		string dieta_, Veterinario& veterinario_, Tratador& tratador_, string batismo_):
			id(id_), classe(classe_), nome(nome_), cientifico(cientifico_), sexo(sexo_), tamanho(tamanho_),
			dieta(dieta_), veterinario(veterinario_), tratador(tratador_), batismo(batismo_) {}
			

Animal::~Animal(){}

int Animal::getId(){
	return id;
}

string Animal::getClasse(){
	return classe;
}

string Animal::getNome(){
	return nome;
}

string Animal::getCientifico(){
	return cientifico;
}

string Animal::getSexo(){
	return sexo;
}

float Animal::getTamanho(){
	return tamanho;
}

string Animal::getDieta(){
	return dieta;
}

Veterinario Animal::getVeterinario(){
	return veterinario;
}

string Animal::getNomeVeterinario(){
	return veterinario.getNome();
}

string Animal::getNomeTratador(){
	return tratador.getNome();
}

Tratador Animal::getTratador(){
	return tratador;
}

string Animal::getBatismo(){
	return batismo;
}	

void Animal::setId(int id_){
	id = id_;
}

void Animal::setClasse(string classe_){
	classe = classe_;
}

void Animal::setNome(string nome_){
	nome = nome_;
}

void Animal::setCientifico(string cientifico_){
	cientifico = cientifico_;
}

void Animal::setSexo(string sexo_){
	sexo = sexo_;
}

void Animal::setTamanho(float tamanho_){
	tamanho = tamanho_;
}

void Animal::setDieta(string dieta_){
	dieta = dieta_;
}

void Animal::setVeterinario(Veterinario& veterinario_){
	veterinario = veterinario_;
}

void Animal::setTratador(Tratador& tratador_){
	tratador = tratador_;
}

void Animal::setBatismo(string batismo_){
	batismo = batismo_;
}

int Animal::getIdTratador(){
	return id_tratador;
}

int Animal::getIdVeterinario(){
	return id_veterinario;
}

void Animal::setIdTratador(int id_tratador_){
	id_tratador = id_tratador_;
}

void Animal::setIdVeterinario(int id_veterinario_){
	id_veterinario = id_veterinario_;
}
		
std::istream& operator>> (std::istream &i, Animal &a){
	string aux = "";
	getline(i, aux, ';');
	if(aux == ""){
		a.id = -1;
		return i;
	}
	a.id = std::stoi(aux, nullptr, 10);

	getline(i, a.classe, ';');

	getline(i, a.nome, ';');

	getline(i, a.cientifico, ';');

	getline(i, a.sexo, ';');

	getline(i, aux, ';');
	a.tamanho = std::stof(aux);

	getline(i, a.dieta, ';');

	getline(i, aux, ';');
	a.id_veterinario = std::stoi(aux, nullptr, 10);

	getline(i, aux, ';');
	a.id_tratador = std::stoi(aux, nullptr, 10);

	getline(i, a.batismo);

	std::cout << "Chegou no final da extraçao" << std::endl;

	return i;	
}

std::ostream& operator<< (std::ostream &o, Animal &a){
	o << "ID: " 				<< a.id << endl 
	  << "Nome: " 				<< a.nome << "    "
	  << "Nome de batismo: " 	<< a.batismo << endl
	  << "Nome cientifico: " 	<< a.cientifico << "    "
	  << "Sexo: " 				<< a.sexo << endl
	  << "Tamanho: "			<< a.tamanho << " metros" << "    "
	  << "Dieta: "				<< a.dieta << endl
	  << "ID do tratador: " 	<< a.id_tratador << "    "
	  << "ID do veterinario: "	<< a.id_veterinario << endl;

	  return o;
}

string Animal::gerarCSV(Animal &a){
	std::ostringstream id_string;
    id_string << a.id;
    std::ostringstream id_vet;
    id_vet << a.id_veterinario;
    std::ostringstream id_trat;
    id_trat << a.id_tratador;
    std::ostringstream tam_str;
    tam_str << a.tamanho;

	string aux = id_string.str() + ";" + a.nome + ";" + a.batismo + ";" + a.cientifico + ";" +
					a.sexo + ";" + tam_str.str() + ";" + a.dieta + ";" + id_trat.str()
					+ ";" + id_vet.str() + "\n";
	return aux;
}
