/**
 * @file anfibio.cpp
 * @brief Implementação da classe Anfibio
 */

#include "anfibio.h"

Anfibio::Anfibio() {

}

Anfibio::Anfibio(int total_mudas_, string ultima_muda_, int id_, 
		string classe_, string nome_, string cientifico_, 
		string sexo_, float tamanho_, string dieta_, 
		Veterinario& veterinario_, Tratador& tratador_, 
		string batismo_): total_mudas(total_mudas_), ultima_muda(ultima_muda_){
		
		Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_, batismo_);
}
    
Anfibio::~Anfibio(){
	
}

int Anfibio::getTotalMudas(){
	return total_mudas;
}

string Anfibio::getUltimaMuda(){
	return ultima_muda;
}

void Anfibio::setMudas(int total_mudas_){
   total_mudas = total_mudas_;	
}

void Anfibio::setUltimaMuda(string ultima_muda_){
	ultima_muda = ultima_muda_;
}



