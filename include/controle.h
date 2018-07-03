# ifndef CONTROLE_H_
# define CONTROLE_H_
#include <ctype.h>
#include <iostream>
#include <fstream> 		
#include <vector>
#include <memory>
#include <iomanip>
#include <string>
#include <map>

#include "mamifero.h"
#include "animal.h"
#include "anfibio.h"
#include "ave.h"
/*!
 * This class controls the functions applied to animal data.
 *
 */
class controle: public animal, mamifero, anfibio, ave, aveNativa 
{
	/// Public members.
	public:
		/// Constructors
		controle();
		controle(std::string Id_, std::string classe_, std::string nome_, std::string nome_cient_, std::string sexo_, std::string tamanho_,
				std::string dieta_, std::string veter_, std::string trat_, std::string batismo_, std::string pelo_, std::string mudas_, 
				std::string u_muda_,std::string bico_, std::string enverg_,
				std::string origem_, std::string autoriza_, std::string ibama_ );
		/// Destructor
		~controle();
		/// printing functions
		void printMam( std::vector<controle> Mam_);
		void printAnf( std::vector<controle> Anf_);
		void printRep( std::vector<controle> Rep_);
		void printAve( std::vector<controle> Ave_);
		void printNome( std::vector<controle> Nome_);
		/// Function for data loading
		std::vector<controle> carrega(void);
		/// Function to write data to text files
		void grava( std::vector<controle> Vet_);
		/// Function to convert text data to integers
		int converte( char ch_ );
		/// Function for data control
		void controla( int tipo);
	/// Private members
	private:

		std::vector<controle> store;//<! store data.

	/// Function that overwrites the operator >>.
		friend istream& operator>> (istream& is, controle& Controle)
		{
		    if(getline(is, Controle.Id, ';')) 
		    {

			    getline(is, Controle.classe, ';');
			    getline(is, Controle.nome, ';');
			    getline(is, Controle.nome_cient, ';');
			    getline(is, Controle.sexo, ';');
			    getline(is, Controle.tamanho, ';');
			    getline(is, Controle.dieta, ';');
			    getline(is, Controle.veter, ';');
			    getline(is, Controle.trat, ';');
			    getline(is, Controle.batismo, ';');
			    getline(is, Controle.pelo, ';');
			    getline(is, Controle.mudas, ';');
			    getline(is, Controle.u_muda, ';');
			    getline(is, Controle.bico, ';');
			    getline(is, Controle.enverg, ';');
			    getline(is, Controle.origem, ';');
			    getline(is, Controle.autoriza, ';');
				getline(is, Controle.ibama );
			    
		    }
		    
		    return is;
		}

		
		/// Function that overwrites the operator ==.
		friend bool operator== (controle &a1, controle &a2)
		{
	    	
	    	return (a1.classe == a2.classe && a1.Id == a2.Id);
	    }

	    /// Function that overwrites the operator <<.
	    friend ostream& operator << (ostream& os, controle& Controle)
		{
			
		     os << Controle.Id << ";" << Controle.classe << ";" << Controle.nome << ";" << Controle.nome_cient << ";"
			<< Controle.sexo << ";" << Controle.tamanho << ";" << Controle.dieta << ";" << Controle.veter << ";"
			<< Controle.trat << ";" << Controle.batismo << ";" << Controle.pelo << ";" << Controle.mudas << ";"
			<< Controle.u_muda << ";" << Controle.bico << ";" << Controle.enverg << ";" << Controle.origem << ";"
			<< Controle.autoriza << ";" << Controle.ibama;
		    	
		    return os;
		}

};




#endif