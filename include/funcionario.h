#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using std::string;

class Funcionario{	
	public:
		Funcionario(int id_, string nome_, string cpf_, short idade_,  short tipoSanguineo_, char fatorRH_,
					string especialidade_);

		~Funcionario();

	
	//# protegido
	protected:
		int id;
		string nome;
		string cpf;
		short idade;
		short tipoSanguineo;
		char fatorRH;
		string especialidade;

	private:
		
		
	public:
		// getters
		   int getId();
		string getNome();
		string getCpf();
		 short getIdade();
		 short getTipoSanguineo();
		  char getFatorRH();
		string getEspecialidade();
		
		// Setters
		void setId(int id_);
		void setNome(string nome_);
		void setCpf(string cpf_);
		void setIdade(short idade_);
		void setTipoSanguineo(short tipoSanguineo_);
		void setFatorRH(char fatorRH_);
		void setEspecialidade(string especialidade_);

	
};

 
#endif
