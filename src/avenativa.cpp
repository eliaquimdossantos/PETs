#include <string>

#include "avenativa.h"

AveNativa::AveNativa(){

}
AveNativa::AveNativa(string uf_origem_, string autorizacao_, 
		string ibama_, int tamanho_bico_, int envergadura_, 
		string id_, string classe_, string nome_, 
		string cientifico_, string sexo_, float tamanho_, 
		string dieta_, Veterinario& veterinario_, Tratador& tratador_, 
		string batismo_): Nativo(uf_origem_, autorizacao_, ibama_),
		Ave(tamanho_bico_, envergadura_, id_, classe_, nome_ ,cientifico_,
			sexo_, tamanho_, dieta_, veterinario_, tratador_, batismo_){

}
AveNativa::~AveNativa(){

}

