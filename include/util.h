#ifndef UTIL_
#define UTIL_ 

#include "empresa.h"
#include "animal.h"

#include <vector>
using std::vector;


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

/*
#include <memory>
using std::shared_ptr;
using std::make_shared;
*/

class Util{
private:

	vector<Animal> armAnimal;
	vector<Animal> armSaida;
	vector<Animal>::iterator itA;

public:
	Util();
	~Util();

	
	void exportar(string nomeArqSaida);
	void buscaExporta(string classe, string veterinario, string tratador);

};

#endif