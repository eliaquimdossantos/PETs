#include <string>

#include "ave.h"


Ave::Ave(){

}

Ave::Ave(int tamanho_bico_, int envergadura_, int id_, string classe_, string nome_, string cientifico_, string sexo_, float tamanho_, string dieta_, Veterinario& veterinario_, Tratador& tratador_, string batismo_): tamanho_bico(tamanho_bico_), envergadura(envergadura_){
	Animal(id_, classe_, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_, tratador_, batismo_);
}

Ave::~Ave(){

}

int Ave::getTamanhoBico(){
	return tamanho_bico;
}

int Ave::getEnvergadura(){
	return envergadura;
}
void Ave::setTamanhoBico(int tamanho_bico_){
	tamanho_bico = tamanho_bico_;
}

void Ave::setEnvergadura(int envergadura_){
	envergadura = envergadura_;
}



