/**
 * @file anfibio.cpp
 * @brief Implementação da classe Anfibio
 */

#include "anfibio.h"

Anfibio::Anfibio() {

}

Anfibio::Anfibio(int total_mudas_, string ultima_muda_): 
	total_mudas(total_mudas_), ultima_muda(ultima_muda_) {
		
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

void setUltimaMuda(string ultima_muda_){
	ultima_muda = ultima_muda_;
}



