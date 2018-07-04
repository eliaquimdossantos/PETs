#include "empresa.h"

Empresa::Empresa(){}
Empresa::~Empresa(){}

/**
* @brief Le as informacoes do arquivo csv de funcionarios e amazena em memoria
**/
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

/**
* @brief Limpa o arquivo csv e grava as informacoes dos funcionarios em memoria no disco
**/
void Empresa::gravarFuncionarios(string path_){
	
	ofstream limpar(path_,std::ios::out);
	ofstream csvFunc(path_,std::ios::out);

	//limpar arquivo
	if (limpar.is_open() && limpar.good()){
			limpar << "";
			limpar.close();
	}else
		cout << "Erro ao abrir arquivo 1" << path_ << endl;

	//grava no arquivo limpo
    if (csvFunc.is_open() && csvFunc.good()){
    	
        for (int i =0; i < (int)armazenaFuncionarios.size(); i++){
                //dados separados por ;
                csvFunc << armazenaFuncionarios[i].gerarCSV(armazenaFuncionarios[i]);
        }
         csvFunc.close();
	}else 
       cout << "Erro ao abrir arquivo " << path_ << endl;
       // modificar depois p throw 
}

/**
* @brief verifica se ja exite um funcionario com mesmo cpf, se nao adiciona
**/
void Empresa::adicionarFuncionarios(Funcionario& f){

	//verifica se ja existe
	for(int i=0; i < (int)armazenaFuncionarios.size(); i++){
		if(armazenaFuncionarios[i].getCpf() == f.getCpf()){
			cout << "Funcionario existente!" << endl;
			break;
		}
	}
	//se passou na verificacao adiciona
	armazenaFuncionarios.push_back(f);
}


void Empresa::mostrarFuncionarios(){
	vector<Funcionario>::iterator it = armazenaFuncionarios.begin();

	for(; it != armazenaFuncionarios.end(); it++){
		cout << *it << endl;
	}
}
