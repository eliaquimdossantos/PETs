#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using std::string;

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

	
};

 
#endif
