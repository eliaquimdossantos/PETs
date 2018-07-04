#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using std::string;
using std::getline;

#include <iostream>

using std::endl;
using std::cout;
using std::cin;


 class Funcionario{	
public:
	Funcionario();
	Funcionario(string id_, string nome_, string cpf_, 
		string idade_,  string tipoSanguineo_, string fatorRH_, 
		string especialidade_);
	Funcionario(string id_, string nome_, string cpf_,
		string idade_,  string tipoSanguineo_, string fatorRH_, 
		string especialidade_, const string funcao_);

	~Funcionario();


//# protegido
protected:
	string id;
	string nome;
	string cpf;
	string idade;
	string tipoSanguineo;
	string fatorRH;
	string especialidade;
	string funcao;
	

private:
	
	
public:
	// getters
	string getId();
	string getFuncao();
	string getNome();
	string getCpf();
	string getIdade();
	string getTipoSanguineo();
	string getFatorRH();
	string getEspecialidade();

	
	// Setters
	void setId(string id_);
	void setNome(string nome_);
	void setCpf(string cpf_);
	void setIdade(string idade_);
	void setTipoSanguineo(string tipoSanguineo_);
	void setFatorRH(string fatorRH_);
	void setEspecialidade(string especialidade_);
	void setFuncao(string funcao_);

	friend bool operator== (Funcionario &f1, Funcionario &f2);

	/**
	 *@brief Sobrecarga do operador de inserção
	 */
	friend std::ostream& operator<< (std::ostream &o, Funcionario const &f); 
	friend std::istream& operator>> (std::istream &i, Funcionario &f);
	std::ostream& imprimir(std::ostream&) const;

};

 
#endif
