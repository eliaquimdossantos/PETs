#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
using std::string;

#include <iostream>

using std::endl;
using std::cout;

#include <iomanip>

class Funcionario{	
public:
	Funcionario(int id_, string nome_, string cpf_, int idade_,  string tipoSanguineo_, char fatorRH_,
				string especialidade_);

	~Funcionario();


//# protegido
protected:
	int id;
	string nome;
	string cpf;
	int idade;
	string tipoSanguineo;
	char fatorRH;
	string especialidade;
	

private:
	
	
public:
	// getters
	   int getId();
	string getNome();
	string getCpf();
	   int getIdade();
	string getTipoSanguineo();
	  char getFatorRH();
	string getEspecialidade();

	
	// Setters
	void setId(int id_);
	void setNome(string nome_);
	void setCpf(string cpf_);
	void setIdade(int idade_);
	void setTipoSanguineo(string tipoSanguineo_);
	void setFatorRH(char fatorRH_);
	void setEspecialidade(string especialidade_);

	friend bool operator== (Funcionario &f1, Funcionario &f2);

	/**
	 *@brief Sobrecarga do operador de inserção
	 */
	friend std::ostream& operator<< (std::ostream &o, Funcionario const &t); 
	virtual std::ostream& imprimir(std::ostream&) const = 0;

};

 
#endif
