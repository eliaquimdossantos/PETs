#include "empresa.h"

Empresa::Empresa(){}
Empresa::~Empresa(){}

void Empresa::carregarFuncionarios(string path_){
	
	ifstream csvFunc(path_,std::ios::in);

    if (csvFunc.is_open() && csvFunc.good()){
    	//Funcionario f;

    		//sobrecarregar ler getline ;
			//while(csvFunc >> f){

					//armazenaFuncionarios.push_back(f);

			//}

		csvFunc.close();
	}else 
       cout << "Erro ao abrir arquivo " << path_ << endl;
       //erro ao abrir arquivo... modificar depois p throw 
}