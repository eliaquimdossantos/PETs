#ifndef AVEEXOTICA_H
#define AVEEXOTICA_H

#include "exotico.h"
#include "ave.h"
#include <string>

using std::string;

class AveExotica : protected Exotico, protected Ave{
public:
	/**
	 * @brief Construtor padrão
	 */
	AveExotica();
	/**
	 * @brief Construtor parametrizado
	 */
	AveExotica(string uf_origem_, string ibama_, 
		int tamanho_bico_, int envergadura_, 
		string id_, string classe_, string nome_, 
		string cientifico_, string sexo_, float tamanho_, 
		string dieta_, Veterinario& veterinario_, Tratador& tratador_, 
		string batismo_);
	/**
	 * @brief Destrutor
	 */
	~AveExotica();
};

#endif