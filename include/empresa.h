#ifndef EMPRESA_
#define EMPRESA_ 

#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"

#include <vector>
using std::vector;

#include <fstream> 
using std::ifstream;
using std::ofstream;

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
	string pathFuncionarios;
	string pathAnimais;
	vector<Funcionario>::iterator it;

public:
	Empresa(string diretorioData_);
	~Empresa();

	void carregarFuncionarios();
	void gravarFuncionarios();
	void excluiFuncionario();
	//void carregarAnimais(string path_);

	//temporária para testes
	void adicionarFuncionarios(Funcionario& f);
	void mostrarFuncionarios();
	void empregarFuncionarios();
};

#endif