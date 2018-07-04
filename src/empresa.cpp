#include "empresa.h"

Empresa::Empresa(){}
Empresa::~Empresa(){}

void Empresa::carregarFuncionarios(string path_){
	
	ifstream csvFunc(path_,std::ios::in);

    if (csvFunc.is_open() && csvFunc.good()){
    	
    		Funcionario f;
    		//sobrecarregar ler getline ;
			while(csvFunc >> f){
					armazenaFuncionarios.push_back(f);
			}

		csvFunc.close();
	}else 
       cout << "Erro ao abrir arquivo " << path_ << endl;
       //erro ao abrir arquivo... modificar depois p throw 
}

void Empresa::gravarFuncionarios(string path_){
	
	ofstream csvFunc(path_,std::ios::out);

    if (csvFunc.is_open() && csvFunc.good()){
    	
        for (auto i = armazenaFuncionarios.begin(); i != armazenaFuncionarios.end(); ++i){
                csvFunc << (*i);
                csvFunc << "\n";  
        }
         csvFunc.close();
	}else 
       cout << "Erro ao abrir arquivo " << path_ << endl;
       //erro ao abrir arquivo... modificar depois p throw 
}



void Empresa::adicionarFuncionarios(Funcionario& f){
	armazenaFuncionarios.push_back(f);
}

void Empresa::mostrarFuncionarios(){
	vector<Funcionario>::iterator it = armazenaFuncionarios.begin();

	for(; it != armazenaFuncionarios.end(); it++){
		cout << *it << endl;
	}
}
