#include "nativo.h"
#include "veterinario.h"
#include "tratador.h"

Nativo::Nativo(){
	
}
	
Nativo::Nativo(string uf_origem_, string autorizacao_, string ibama_) :
	uf_origem(uf_origem_), autorizacao(autorizacao_), AnimalSilvestre(ibama_){
}	
Nativo::~Nativo(){

}
string Nativo::getUfOrigem(){
	return uf_origem;
}
string Nativo::getAutorizacao(){
	return autorizacao;
}
void Nativo::setUfOrigem(string uf_origem_){
	uf_origem = uf_origem_;
}
void Nativo::setAutorizacao(string autorizacao_){
	autorizacao = autorizacao_;
}

