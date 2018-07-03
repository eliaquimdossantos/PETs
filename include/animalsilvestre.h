#ifndef ANIMAL_SILVESTRE_H
#define ANIMAL_SILVESTRE_H  

#include <string>

using std::string;

class AnimalSilvestre{
protected:
	string ibama;
public:
	/**
 	 *@brief Construtor padrão
	 */
	AnimalSilvestre();
	/**
	 * @brief Construtor parametrizado
	 */
	AnimalSilvestre(string ibama_);
	/**
	 * @brief Destrutor
	 */
	~AnimalSilvestre();
	/**
	 * @brief Utilizada para obter a informaçao sobre 
	 * em qual unidade do ibama o animal foi cadastrado
	 * @return Ultima muda do anfibio
	 */
	string getIbama();
	/**
	 * @brief Define a unidade do ibama responsável
	 * @param Unidade do ibama responsável
	 */
	void setIbama(string ibama_);
};

#endif