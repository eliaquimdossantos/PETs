/**
 * @file animal.cpp
 * @brief Implementação da classe Animal
 */

#include "animal.h"

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
		
std::istream& operator>> (std::istream &i, Animal &a){
	string aux = "";
	getline(i, aux, ';');
	a.id = std::stoi(aux, nullptr, 10);

	getline(i, a.nome, ';');

	getline(i, a.cientifico, ';');

	getline(i, a.sexo, ';');

	getline(i, aux, ';');
	a.tamanho = std::stod(aux);

	getline(i, a.dieta, ';');

	getline(i, aux, ';');
	a.veterinario.setId(std::stoi(aux, nullptr, 10));

	getline(i, aux, ';');
	a.tratador.setId(std::stoi(aux, nullptr, 10));

	getline(i, a.batismo);

	return i;	
}