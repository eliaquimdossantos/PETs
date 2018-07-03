/**
 * @file animal.h
 * @brief Cabeçalho da classe Animal
 */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using std::string;

class Animal{	
protected:
	int id;
	string classe;
	string nome;
	string cientifico;
	char sexo;
	float tamanho;
	string dieta;
	Veterinario veterinario;
	Tratador tratador;
	string batismo;

public:
	/**
	 * Construtor padrão
	 */
	Animal();
	/**
	 * @brief Construtor parametrizado
	 */
	Animal(string id_, string classe_, string nome_, string cientifico_, string sexo_, string tamanho_,
		string dieta_, Veterinario veterinario_, Tratador tratador_, string batismo_);	
	/**
	 * @brief Destrutor
	 */ 
	~Animal();
	/**
	 * @brief Utilizada para obter o id do animal
	 * @return Id do animal
	 */
	int getId();
	/**
	 * @brief Utilizada para obter a classe que o animal pertence
	 * @return Classe que o animal pertence
	 */
	string getClasse();
	/**
	 * @brief Utilizada para obter o
	/** nome do animal
	 * @return Nome do animal
	 */
	string getNome();
	/**
	 * @brief Utilizada para obter o nome cientifico do animal
	 * @return Nome cientifico do animal
	 */
	string getCientifico();
	/**
	 * @brief Utilizada para obter o sexo do animal
	 * @return Sexo do animal
	 */
	char getSexo();
	/**
	 * @brief Utilizada para obter o nome do animal
	 * @return Nome do animal
	 */
	float getTamanho();
	/**
	 * @brief Utilizada para obter a dieta do animal
	 * @return Dieta do animal
	 */
	string getDieta();
	/**
	 * @brief Utilizada para obter o veterinário do animal
	 * @return Veterinario do animal
	 */
   	Veterinario getVeterinario();
   	/**
	 * @brief Utilizada para obter o tratador do animal
	 * @return Tratador do animal
	 */
	Tratador getTratador();
	/**
	 * @brief Utilizada para obter o nome de batismo do animal
	 * @return Nome de batismo do animal
	 */
	string getBatismo();
	/**
	 * @brief Define o id do animal
	 * @param id_ Inteiro que define o id
	 */
	void setId(int id_);
	/**
	 * @brief Define a classe do animal
	 * @param classe_ String que define a classe que o animal pertence
	 */
	void setClasse(string classe_);
	/**
	 * @brief Define o nome do animal
	 * @param nome_ String que define o nome do animal
	 */
	void setNome(string nome_);
	/**
	 * @brief Define o nome cientifico do animal
	 * @param cientifico_ String que define o nome cientifico
	 */
	void setCientifico(string cientifico_);
	/**
	 * @brief Define o sexo do animal
	 * @param sexo_ Char que define o sexo do animal
	 */
	void setSexo(char sexo_);
	/**
	 * @brief Define o tamanho do animal
	 * @param tamanho_ Float que define o nome do animal
	 */
	void setTamanho(float tamanho_);
	/**
	 * @brief Define o alimento da dieta do animal
	 * @param dieta_ String que define o alimento de dieta do animal
	 */
	void setDieta(string dieta_);
	/**
	 * @brief Define o veterinario do animal
	 * @param veterinario_ Objeto do tipo Veterinario que define o veterinario do animal
	 */
	void setVeterinario(Veterinario veterinario_);
	/**
	 * @brief Define o tratador do animal
	 * @param tratador_ Objeto do tipo Tratador que define o tratador do animal
	 */
	void setTratador(Tratador tratador_);
	/**
	 * @brief Define o nome de batismo do animal
	 * @param batismo_ String que define o nome de batismo do animal
	 */
	void setBatismo(string batismo_);		
};
 
#endif
