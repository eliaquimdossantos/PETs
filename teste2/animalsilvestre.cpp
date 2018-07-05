#include "animalsilvestre.h"

AnimalSilvestre::AnimalSilvestre(){

}

AnimalSilvestre::AnimalSilvestre(string ibama_): ibama(ibama_){

}

AnimalSilvestre::~AnimalSilvestre(){

}

string AnimalSilvestre::getIbama(){
	return ibama;
}

void AnimalSilvestre::setIbama(string ibama_){
	ibama = ibama_;
}