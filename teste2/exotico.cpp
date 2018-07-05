#include "exotico.h"

Exotico::Exotico(){

}

Exotico::Exotico(string uf_origem_, string ibama_):
	AnimalSilvestre(ibama_), uf_origem(uf_origem_){

}

Exotico::~Exotico(){

}

string Exotico::getUfOrigem(){
	return uf_origem;
}

void Exotico::setUfOrigem(string uf_origem_){
	uf_origem = uf_origem_;
}

