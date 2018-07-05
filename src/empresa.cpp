#include "empresa.h"

Empresa::Empresa(string diretorioData_):pathFuncionarios(diretorioData_+"/funcionarios.CSV"),pathAnimais(diretorioData_+"/animais.CSV"){}
Empresa::~Empresa(){}

/**
* @brief Le as informacoes do arquivo csv de funcionarios e amazena em memoria
**/
void Empresa::carregarFuncionarios(){
	armazenaFuncionarios.clear();

	ifstream csvFunc(pathFuncionarios,std::ios::in);

    if (csvFunc.is_open() && csvFunc.good()){
    	
    		Funcionario f;
    		//sobrecarregar ler getline ;
			while(csvFunc >> f){
					armazenaFuncionarios.push_back(f);
			}

		csvFunc.close();
	}else 
       cout << "Erro ao abrir arquivo " << pathFuncionarios << endl;
       //erro ao abrir arquivo... modificar depois p throw 
}

/**
* @brief Limpa o arquivo csv e grava as informacoes dos funcionarios em memoria no disco
**/
void Empresa::gravarFuncionarios(){
	
	ofstream limpar(pathFuncionarios,std::ios::out);
	ofstream csvFunc(pathFuncionarios,std::ios::out);

	//limpar arquivo
	if (limpar.is_open() && limpar.good()){
			limpar << "\n";
			limpar.close();
	}else
		cout << "Erro ao abrir arquivo 1" << pathFuncionarios << endl;

	//grava no arquivo limpo
    if (csvFunc.is_open() && csvFunc.good()){
    	
       for (armazenaFuncionarios.begin(); it != armazenaFuncionarios.end(); it++){
                //dados separados por ;
                csvFunc << (*it).gerarCSV(*it);
        }
         csvFunc.close();
	}else 
       cout << "Erro ao abrir arquivo " << pathFuncionarios << endl;
       // modificar depois p throw 
}

/**
* @brief verifica se ja exite um funcionario com mesmo cpf, se nao adiciona
**/
void Empresa::adicionarFuncionarios(Funcionario& f){
	bool find = false;
	
	for(it=armazenaFuncionarios.begin(); it != armazenaFuncionarios.end(); it++){
		if((*it).getCpf() == f.getCpf()){
			
			find = true;
		}
	}
	//se passou na verificacao adiciona
	if(!find){
		armazenaFuncionarios.push_back(f);
		cout << endl << "Bem vindo " << f.getNome() << endl;
	}else{
		cout <<"Funcionario existente!" << endl;
	}
}


void Empresa::mostrarFuncionarios(){

	carregarFuncionarios();
	cout << "		LISTA DE FUNCIONARIOS 		" << endl << endl;
	cout << "--------------------------------------------" << endl;
	it = armazenaFuncionarios.begin();

	for(it=armazenaFuncionarios.begin(); it != armazenaFuncionarios.end(); it++){
		cout << *it << endl;
	}
	system("sleep 6");
}

void Empresa::excluiFuncionario(){
	string cpf_ = "";
	cout << "digite o cpf do funcionario a ser deletado:";
	cin >> cpf_;
	carregarFuncionarios();

	for(it=armazenaFuncionarios.begin(); it != armazenaFuncionarios.end(); it++){
		if((*it).getCpf() == cpf_){
			armazenaFuncionarios.erase(it);
			cout << (*it).getNome() << " deletado com sucesso!" << endl;
			system("sleep 5");
			gravarFuncionarios();
			break;
		}
	}
	
	cout << "Funcionario nao encotrado! cpf buscado " << cpf_ << endl;
	system("sleep 5");
		
}

/**
* @brief responsavel de entrar com os dados do funcionarios
**/
void Empresa::empregarFuncionarios(){

	cout << "------------CADASTRAR FUNCIONARIO-------------" << endl;
	cout << "1 - Veterinario" << endl;
	cout << "2 - Tratador " << endl;
	cout << "Digite a opcao: ";
	int op = 0;
	cin >> op;

	if(op==1){
		system("clear");
		cout << "Cadastrando novo veterinario:" << endl<< endl<< endl;

		string id,	nome, cpf, idade, tipoSanguineo, fatorRH, especialidade;
		
		cout<<"Digite o identificador Id.: ";
		cin >> id;
		cin.ignore();
		cout<<"Digite o nome do funcionario.: ";
		getline(cin, nome);
		//cin.ignore();
		cout<<"Digite o cpf.: ";
		cin >> cpf;
		cin.ignore();
		cout<<"Digite a idade.: ";
		cin >> idade;
		cin.ignore();
		cout<<"Digite tipo sanguineo.: ";
		cin>> tipoSanguineo;
		cin.ignore();
		cout<<"Digite o fator RH.: ";
		cin >> fatorRH;
		cin.ignore();
		cout<<"Digite a especialidade.: ";
		cin >> especialidade;
		cin.ignore();

		Veterinario *v = new Veterinario(id,nome,cpf,idade,tipoSanguineo,fatorRH,especialidade);
		carregarFuncionarios();
		adicionarFuncionarios(*v);
		gravarFuncionarios();
		system("sleep 5");

	}

	if(op==2){

		system("clear");
		cout << "Cadastrando novo tratador:" << endl<< endl<< endl;

		string id,	nome, cpf, idade, tipoSanguineo, fatorRH, especialidade;

		cout<<"Digite o identificador Id.: ";
		cin >> id;
		cin.ignore();
		cout<<"Digite o nome do funcionario.: ";
		getline(cin, nome);
		//cin.ignore();
		cout<<"Digite o cpf.: ";
		cin >> cpf;
		cin.ignore();
		cout<<"Digite a idade.: ";
		cin >> idade;
		cin.ignore();
		cout<<"Digite tipo sanguineo.: ";
		cin>> tipoSanguineo;
		cin.ignore();
		cout<<"Digite o fator RH.: ";
		cin >> fatorRH;
		cin.ignore();
		cout<<"Digite a especialidade.: ";
		cin >> especialidade;
		cin.ignore();
		
		Tratador *t = new Tratador(id,nome,cpf,idade,tipoSanguineo,fatorRH,especialidade);
		carregarFuncionarios();
		Empresa::adicionarFuncionarios(*t);
		gravarFuncionarios();
		system("sleep 5");
	}

}