/**
 * @file mamifero.cpp
 * @brief Implementação da classe Mamifero
 */

#include "mamifero.h"

Mamifero::Mamifero() {

}

Mamifero::Mamifero(string corPelo_, int id_, 
		string classe_, string nome_, string cientifico_, 
		string sexo_, float tamanho_, string dieta_, 
		Veterinario& veterinario_, Tratador& tratador_, 
		string batismo_): total_mudas(total_mudas_), ultima_muda(ultima_muda_){
		
		Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_, batismo_);
}
    
Mamifero::~Mamifero(){
	
}

string Mamifero::getCorPelo(){
	return corPelo;

}
	/**
	 * @brief Define cor do pelo
	 * @param Ucor do pelo do mamifero
	 */
void Mamifero::setCorPelo(string corPelo_){
	corPelo = corPelo_;
}


