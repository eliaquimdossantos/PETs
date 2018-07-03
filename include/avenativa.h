#ifndef AVENATIVA_H
#define AVENATIVA_H

#include "nativo.h"
#include <string>

using std::string;

class AveNativa : protected Nativo, protected Ave{
public:
	/**
	 * @brief Construtor padrão
	 */
	AveNativa();
	/**
	 * @brief Construtor parametrizado
	 */
	AveNativa(string uf_origem_, string autorizacao_, 
		string ibama_, int tamanho_bico_, int envergadura_, 
		string id_, string classe_, string nome_, 
		string cientifico_, string sexo_, string tamanho_, 
		string dieta_, Veterinario veterinario_, Tratador tratador_, 
		string batismo_);
	/**
	 * @brief Destrutor
	 */
	~AveNativa();
};

#endif