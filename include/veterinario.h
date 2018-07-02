#ifndef VETERINARIO_H
#define VETERINARIO_H

class Veterinario : public Funcionario{

protected:
	std::string funcao;
	
public:
	Veterinario(int id_, string nome_, string cpf_, short idade_,  short tipoSanguineo_, char fatorRH_,
					string especialidade_);
	~Veterinario();

	//adiciona in
	friend std::istream& operator>> (std::istream& is, Funcionario& f){
			getline(is, f.id, ';');
			getline(is, f.funcao, ';');
		    getline(is, f.nome, ';');
		    getline(is, f.cpf, ';');
		    getline(is, f.idade, ';');
		    getline(is, f.tipoSanguineo, ';');
		    getline(is, f.fatorRH, ';');
			getline(is, f.especialidade );
			    
	    return is;	
	}
	
    // imprimir out
    friend std::ostream& operator << (std::ostream& os, Funcionario& f){

	     os << f.id << ";"<< f.funcao << ";"<< f.nome << ";"<< f.cpf << ";"
		<< f.idade << ";"<< f.tipoSanguineo << ";"<< f.fatorRH << ";"<< f.especialidade;
	    	
	    return os;
	}

	// Compara
	friend bool operator== (Funcionario &f1, Funcionario &f2){
	   	return (f1.cpf == f2.cpf );
    }


};
#endif