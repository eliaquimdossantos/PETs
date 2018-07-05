# ifndef AVE_H
# define AVE_H

#include "animal.h"
#include <string>

using std::string;

class Ave : protected Animal{
protected:
	int tamanho_bico;
	int envergadura;

public:
	/**
	 *@brief Construtor padrão
	 */
	Ave();
	/**
	 *@brief Construtor parametrizado
	 */
	Ave(int tamanho_bico_, int envergadura_, int id_, 
		string classe_, string nome_, string cientifico_, 
		string sexo_, float tamanho_, string dieta_, 
		Veterinario& veterinario_, Tratador& tratador_, 
		string batismo_);
	/**
	 *@brief Destrutor
	 */
	~Ave();
	/**
	 * @brief Utilizada para obter o tamanho do bico da ave
	 * @return Tamanho do bico da ave
	 */
	int getTamanhoBico();
	/**
	 * @brief Utilizada para obter a envergadura da ave
	 * @return Envergadura da ave
	 */
	int getEnvergadura();
	/**
	 * @brief Define o tamanho do bico da ave
	 * @param tamanho_bico_ Tamanho do bico da ave
	 */
	void setTamanhoBico(int tamanho_bico_);
	/**
	 * @brief Define a envergadura da ave
	 * @param envergadura_ Envergadura da ave
	 */
	void setEnvergadura(int envergadura_);
};

#endif