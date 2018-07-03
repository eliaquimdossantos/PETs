#ifndef EXOTICO_H
#define EXOTICO_H  

#include "animalsilvestre.h"
#include <string>

using std::string;

class Exotico : protected AnimalSilvestre{
protected:
	string uf_origem;
public:
	/**
	 * @brief Construtor padrão
	 */
	Exotico();
	/**
	 * @brief Construtor parametrizado
	 */
	Exotico(string uf_origem_, string ibama_);
	/**
	 * @brief Destrutor
	 */
	~Exotico();
	/**
	 * @brief Utilizada para obter a origem do animal
	 * @return País de origem do animal
	 */
	string getUfOrigem();
	/**
	 * @brief Define o país de origem do animal
	 * @param uf_origem_ País de origem do animal
	 */
	void setUfOrigem(string uf_origem_);
}

#endif