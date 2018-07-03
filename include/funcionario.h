#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_
#include <ctype.h>
#include <iostream>
#include <fstream> 		
#include <vector>
#include <memory>
#include <iomanip>
#include <string>


/// funcionario is the main classs.
class funcionario
{	
	/// Pubics members
	public:
		funcionario();
		funcionario(std::string Id_, std::string funcao_, std::string nome_, std::string cpf_, std::string idade_, std::string tipo_, std::string fator_,
			std::string espec_);

		virtual ~funcionario();

		void printFunc( std::vector<funcionario> Vet_);
		int converte( char ch_ );
		void carrega( void );
		void grava( std::vector<funcionario> Vet_);
		void controla( int tipo);


	/// Protected members	
	protected:
		std::string Id;
		std::string funcao;
		std::string nome;
		std::string cpf;
		std::string idade;
		std::string tipo;
		std::string fator;
		std::string espec;

	private:
		std::vector<funcionario> emprega;//<! store data.
		
	public:
		/// getters
		std::string getId();
		std::string getfuncao();
		std::string getnome();
		std::string getcpf();
		std::string getidade();
		std::string gettipo();
		std::string getfator();
		std::string getespec();
		
		/// Setters
		void setId(std::string Id_);
		void setfuncao(std::string funcao_);
		void setnome(std::string nome_);
		void setcpf(std::string cpf_);
		void setidade(std::string idade_);
		void settipo(std::string tipo_);
		void setfator(std::string fator_);
		void setespec(std::string espec_);
		
	///
	friend std::istream& operator>> (std::istream& is, funcionario& Func)
	{
		if(getline(is, Func.Id, ';')) 
		{

			getline(is, Func.funcao, ';');
		    getline(is, Func.nome, ';');
		    getline(is, Func.cpf, ';');
		    getline(is, Func.idade, ';');
		    getline(is, Func.tipo, ';');
		    getline(is, Func.fator, ';');
			getline(is, Func.espec );
			    
	    }
	    return is;	
	}
	

	/// Function that overwrites the operator ==.
	friend bool operator== (funcionario &a1, funcionario &a2)
	{
	   	return (a1.cpf == a2.cpf );
    }

    /// Function that overwrites the operator <<.
    friend std::ostream& operator << (std::ostream& os, funcionario& Func)
	{

	     os << Func.Id << ";"<< Func.funcao << ";"<< Func.nome << ";"<< Func.cpf << ";"
		<< Func.idade << ";"<< Func.tipo << ";"<< Func.fator << ";"<< Func.espec;
	    	
	    return os;
	}

	
};

 
#endif
