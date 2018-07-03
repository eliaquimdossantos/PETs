/**
 * @file animal.cpp
 * @brief Implementação da classe Animal
 */

#include "animal.h"

Animal::Animal() {

}

Animal::Animal(string id_, string classe_, string nome_, string cientifico_, string sexo_, string tamanho_,
		string dieta_, Veterinario veterinario_, Tratador tratador_, string batismo_):
			id(Id_), classe(classe_), nome(nome_), cientifico(cientifico_), sexo(sexo_), tamanho(tamanho_), 
			dieta(dieta_), veterinario(veterinario_), tratador(tratador_), batismo(batismo_) {}
			

Animal::~Animal(){}

string Animal::getId(){
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

string Animal::getTamanho(){
	return tamanho;
}

string Animal::getDieta(){
	return dieta;
}

string Animal::getVeterinario(){
	return veterinario;
}

string Animal::getTratador(){
	return tratador;
}

string Animal::getBatismo(){
	return batismo;
}	

void 
Animal::setId(string id_){
	id = id_;
}

void Animal::setClasse(string classe_){
	classe = classe_;
}

void 
Animal::setNome(string nome_){
	nome = nome_;
}

void 
Animal::setCientifico(string cientifico_){
	cientifico = cientifico_;
}

void 
Animal::setSexo(string sexo_){
	sexo = sexo_;
}

void 
Animal::setTamanho(string tamanho_){
	tamanho = tamanho_;
}

void 
Animal::setDieta(string dieta_){
	dieta = dieta_;
}

void 
Animal::setVeterinario(string veterinario_){
	veterinario = veterinario_;
}

void 
Animal::setTratador(string tratador_){
	tratador = tratador_;
}

void 
Animal::setBatismo(string batismo_){
	batismo = batismo_;
}
		
