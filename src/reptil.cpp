#include "reptil.h"

Reptil::Reptil(){

}

Reptil::Reptil(bool venenoso_, string tipoVeneno_, int id_, string classe_, string nome_, 
	string cientifico_, string sexo_, float tamanho_, string dieta_, 
	Veterinario& veterinario_, Tratador& tratador_, string batismo_) : 
	venenoso(venenoso_), tipoVeneno(tipoVeneno_), Animal(id_, classe_, nome_, cientifico_, 
		sexo_, tamanho_, dieta_, veterinario_,
		tratador_, batismo_){

}

Reptil::~Reptil(){

}

bool Reptil::getVenenoso(){
	return venenoso;
}

string Reptil::getTipoVeneno(){
	return tipoVeneno;
}

void Reptil::setVenenoso(bool venenoso_){
	venenoso = venenoso_;
}

void Reptil::setTipoVeneno(string tipoVeneno_){
	tipoVeneno = tipoVeneno_;
}