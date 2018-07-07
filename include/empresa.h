#ifndef EMPRESA_
#define EMPRESA_ 

#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"
#include "animal.h"

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
	vector<Animal> armazenaAnimais;

	string diretorioData;
	string pathFuncionarios;
	string pathAnimais;

	vector<Animal>::iterator it_a;
	vector<Funcionario>::iterator it_f;

public:
	Empresa(string diretorioData_);
	~Empresa();

	void carregarFuncionarios();
	void carregarAnimais();
	void gravarFuncionarios();
	void gravarAnimais(string nomeArqSaida);
	void excluiFuncionario();
	void excluiAnimal();

	void adicionarFuncionarios(Funcionario& f);
	void consultarAnimalPorFunc();
	void consultarPorClasse();
	void consultarPorNome();
	void adicionarAnimais(Animal& a);
	void mostrarFuncionarios();
	void mostrarAnimais();
	void buscarFuncionario();
	void empregarFuncionarios();
	void cadastrarAnimal();
	bool funcionarioExiste(string id_);
	bool animalExiste(int id_);
	vector<Animal> getArmAnimais();
	void setArmAnimais(vector<Animal> &a);
	vector<Funcionario> getArmFuncionarios();
	void setFuncionarios(vector<Funcionario> &f);
};

#endif