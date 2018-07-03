/**
 * @file anfibio.h
 * @brief Cabeçalho da classe Anfibio
 */

#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <string> 		
#include "animal.h"

using std::string;
 
class Anfibio : protected Animal{	
protected:
	int total_mudas;
	string ultima_muda;
	
public:
	/**
	 * Construtor padrão
	 */
	Anfibio();
	/**
	 * @brief Construtor parametrizado
	 */
	Anfibio(int total_mudas_, string ultima_muda_, string id_, 
		string classe_, string nome_, string cientifico_, 
		string sexo_, string tamanho_, string dieta_, 
		Veterinario& veterinario_, Tratador& tratador_, 
		string batismo_);
	/**
	 * @brief Destrutor
	 */   
	~Anfibio();
	/**
	 * @brief Utilizada para obter o total mudas que o anfibio sofreu
	 * @return Total de mudas
	 */
	int getTotalMudas();
	/**
	 * @brief Utilizada para obter a informaçao de quando foi a ultima muda do anfibio
	 * @return Ultima muda do anfibio
	 */
	string getUltimaMuda();
	/**
	 * @brief Define o total de mudas sofridas pelo anfibio
	 * @param total_mudas Inteiro que define o total de mudas
	 */
	void setMudas(int total_mudas_);
	/**
	 * @brief Define quando foi a última muda sofrida pelo anfíbio
	 * @param Ultima muda do anfibio
	 */
	void setUltimaMuda(string ultima_muda_);	
};

#endif