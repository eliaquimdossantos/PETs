#ifndef EMPRESA_
#define EMPRESA_ 

#include "funcionario.h"

#include <vector>
using std::vector;

#include <fstream> 
using std::ifstream;

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
#include <vector>
using std::vector;

class Empresa{
private:
	vector<Funcionario> armazenaFuncionarios;

public:
	Empresa();
	~Empresa();

	void carregarFuncionarios(string path_);
	//void carregarAnimais(string path_);
};

#endif