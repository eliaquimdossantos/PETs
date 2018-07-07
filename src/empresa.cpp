#include "empresa.h"

Empresa::Empresa(string diretorioData_):diretorioData(diretorioData_),pathFuncionarios(diretorioData_+"/funcionarios.CSV"),pathAnimais(diretorioData_+"/animais.CSV"){}
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
* @brief Le as informacoes do arquivo csv de animais e amazena em memoria
**/
void Empresa::carregarAnimais(){
	armazenaAnimais.clear();

	ifstream csvAnim(pathAnimais,std::ios::in);

    if (csvAnim.is_open() && csvAnim.good()){   		

    		Animal a;
    		//sobrecarregar ler getline ;
			while(csvAnim >> a){
					if(a.getId() != -1)
						armazenaAnimais.push_back(a);
					else
						break;
			}

		csvAnim.close();

	}else 
       cout << "Erro ao abrir arquivo " << pathAnimais << endl;
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
		cout << "Erro ao abrir arquivo  " << pathFuncionarios << endl;

	//grava no arquivo limpo
    if (csvFunc.is_open() && csvFunc.good()){
    	
       for (it_f=armazenaFuncionarios.begin(); it_f != armazenaFuncionarios.end(); it_f++){
                //dados separados por ;
                csvFunc << (*it_f).gerarCSV(*it_f);
        }
         csvFunc.close();
	}else 
       cout << "Erro ao abrir arquivo " << pathFuncionarios << endl;
       // modificar depois p throw 
}

/**
* @brief Limpa o arquivo csv e grava as informacoes dos animais em memoria no disco
**/
void Empresa::gravarAnimais(string nomeArqSaida = ""){
	
	if(nomeArqSaida == ""){
		nomeArqSaida = diretorioData+pathAnimais;
	}else{
		nomeArqSaida = diretorioData+nomeArqSaida;
	}

	ofstream limpar(nomeArqSaida,std::ios::out);
	ofstream csvAnim(nomeArqSaida,std::ios::out);

	//limpar arquivo
	if (limpar.is_open() && limpar.good()){
			limpar << "\n";
			limpar.close();
	}else
		cout << "`w` Erro ao abrir arquivo " << pathAnimais << endl;

	//grava no arquivo limpo
    if (csvAnim.is_open() && csvAnim.good()){
    	
       for (it_a=armazenaAnimais.begin(); it_a != armazenaAnimais.end(); it_a++){
                //dados separados por ;
                csvAnim << (*it_a).gerarCSV(*it_a);
        }
         csvAnim.close();
	}else 
       cout << "Erro ao abrir arquivo " << pathAnimais << endl;
       // modificar depois p throw 
}

/**
* @brief verifica se ja exite um funcionario com mesmo cpf, se nao adiciona
**/
void Empresa::adicionarFuncionarios(Funcionario& f){
	bool find = false;
	carregarFuncionarios();

	for(it_f=armazenaFuncionarios.begin(); it_f != armazenaFuncionarios.end(); it_f++){
		if((*it_f).getCpf() == f.getCpf()){
			
			find = true;
		}
	}
	//se passou na verificacao adiciona
	if(!find){
		armazenaFuncionarios.push_back(f);
		cout << endl << "Bem vindo " << f.getNome() << endl;
		gravarFuncionarios();
	}else{
		cout << endl <<" Funcionario existente!" << endl;
	}
}

vector<Animal> Empresa::getArmAnimais(){
	return armazenaAnimais;
}

vector<Funcionario> Empresa::getArmFuncionarios(){
	return armazenaFuncionarios;
}

void Empresa::setArmAnimais(vector<Animal> &a){
	armazenaAnimais = a;
}
void Empresa::setFuncionarios(vector<Funcionario> &f){
	armazenaFuncionarios =f;
}
/**
* @brief verifica se ja exite um animal com mesmo identificador, se nao adiciona
**/
void Empresa::adicionarAnimais(Animal& a){
	bool find = false;
	carregarFuncionarios();

	for(it_a=armazenaAnimais.begin(); it_a != armazenaAnimais.end(); it_a++){
		if((*it_a).getId() == a.getId()){
			
			find = true;
		}
	}
	//se passou na verificacao adiciona
	if(!find){
		armazenaAnimais.push_back(a);
		cout << endl << "Bem vindo " << a.getBatismo() << endl;
		gravarFuncionarios();
	}else{
		cout << endl <<" Animal existente!" << endl;
	}
}

void Empresa::mostrarFuncionarios(){

	carregarFuncionarios();
	cout << endl <<  "		LISTA DE FUNCIONARIOS 		" << endl << endl;
	cout << "--------------------------------------------" << endl;

	//imprimir
	for(it_f=armazenaFuncionarios.begin(); it_f != armazenaFuncionarios.end(); it_f++){
		cout << *it_f << endl;
	}
	
	if(armazenaFuncionarios.empty())
		cout << " lista vazia!" << endl;
	system("sleep 8");
}

void Empresa::mostrarAnimais(){

	carregarFuncionarios();
	cout << endl <<  "		LISTA DE ANIMAIS 		" << endl << endl;
	cout << "--------------------------------------------" << endl;

	//imprimir
	for(it_a=armazenaAnimais.begin(); it_a != armazenaAnimais.end(); it_a++){
		cout << *it_a << endl;
	}
	
	if(armazenaAnimais.empty())
		cout << " lista vazia!" << endl;
	system("sleep 8");
}

void Empresa::excluiFuncionario(){
	string cpf_ = "";
	cout << "digite o cpf do funcionario a ser deletado: ";
	cin >> cpf_;
	carregarFuncionarios();
	bool find = false;

	for(it_f=armazenaFuncionarios.begin(); it_f != armazenaFuncionarios.end(); it_f++){
		if((*it_f).getCpf() == cpf_){
			armazenaFuncionarios.erase(it_f);
			find = true;
			break;
		}
	}

	if(find){
		cout << (*it_f).getNome() << "deletado com sucesso!" << endl;
		system("sleep 5");
		gravarFuncionarios();

	}else{
		cout << "Funcionario nao encotrado! cpf buscado " << cpf_ << endl;
		system("sleep 5");
	}
		
}

void Empresa::excluiAnimal(){
	int id_ = 0;
	cout << "Digite o identificador do animal a ser exluido: ";
	cin >> id_;
	carregarAnimais();
	bool find = false;

	for(it_a=armazenaAnimais.begin(); it_a != armazenaAnimais.end(); it_a++){
		if((*it_a).getId() == id_){
			armazenaAnimais.erase(it_a);
			find = true;
			break;
		}
	}

	if(find){
		cout << (*it_a).getBatismo() << "deletado com sucesso!" << endl;
		system("sleep 5");
		gravarFuncionarios();

	}else{
		cout << "Animal nao encotrado! identificador buscado " << id_ << endl;
		system("sleep 5");
	}
		
}

void Empresa::buscarFuncionario(){
	string cpf= "";
	cout << "digite o cpf do funcionario a ser buscado: ";
	cin >> cpf;
	cin.ignore();
	carregarFuncionarios();
	bool find = false;

	for(it_f=armazenaFuncionarios.begin(); it_f != armazenaFuncionarios.end(); it_f++){
		if((*it_f).getCpf() == cpf){
			find = true;
			cout << *it_f << endl;
			break;
		}
	}

	if(find)
		system("sleep 7");
	else{
		cout << "Funcionario com cpf " << cpf << " nao encotrado!" << endl;
		system("sleep 5");
	}
		
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

bool Empresa::funcionarioExiste(string id_){
	carregarFuncionarios();
	bool find = false;

	for(it_f=armazenaFuncionarios.begin(); it_f != armazenaFuncionarios.end(); it_f++){
		if((*it_f).getId() == id_){
			find = true;
			break;
		}
	}

	if(find)
		return true;
	else{
		return false;
	}
}

bool Empresa::animalExiste(int id_){
	carregarAnimais();
	bool find = false ;

	for(it_a=armazenaAnimais.begin(); it_a != armazenaAnimais.end(); it_a++){
		if((*it_a).getId() == id_){
			find = true;
			break;
		}
	}

	if(find)
		return true;
	else{
		return false;
	}
}

void Empresa::cadastrarAnimal(){

	Veterinario veterinario;
	Tratador tratador;
	bool permissao = true;
	int id;
	float tamanho;
	string classe, nome, cientifico, sexo, dieta, batismo, id_tratador, id_veterinario;

	cout << "------------CADASTRAR ANIMAL-------------" << endl;
	cout << "O animal a ser cadastrado é um(a):";
	cout << "1 - Ave" << endl;
	cout << "2 - Anfíbio" << endl;
	cout << "3 - Mamifero" << endl;
	cout << "4 - Reptil " << endl;
	cout << "Digite a opcao: ";
	int op = 0;
	cin >> op;

	if(op != 1 && op != 2 && op != 3 && op != 4)
		throw "Erro: operação inválida";

	cin.ignore();

	switch(op){
		case 1:
		classe = "Aves";
		break;
		case 2:
		classe = "Amphibia";
		break;
		case 3:
		classe = "Reptilia";
		break;
		case 4:
		classe = "Mammalia";
	}

	cout << "Agora informe o nome: ";
	getline(cin, nome);
	cout << "E gora informe o nome cientifico: ";
	getline(cin, cientifico);
	cout << "E o sexo ('M' ou 'F')? ";
	getline(cin, sexo);
	for(unsigned i = 0; i < sexo.length(); i++)
		tolower(sexo[i]);

	if(sexo != "m" && sexo != "f")	
		throw "Erro: informação inválida";
	
	cout << "A dieta do animal é a base de? ";
	getline(cin, dieta);

	cout << "Qual é o nome de batismo? ";
	getline(cin, batismo);

	do{
		cout << "Qual é o tamanho de " << batismo << " em metros?";
		try{
			permissao = true;
			cin >> tamanho;
			cin.ignore();
		}catch(...){
			permissao = false;
			cout << "Erro: não foi possível guardar o tamanho" << endl
				<< "O tamanho foi digitado em formato válido? Ex.: 1.54" << endl;
		}
	}while(permissao == false);

	do{
		cout << "Informe um número para identificar o animal a ser cadastrado: ";
		try{
			permissao = true;
			cin >> id;
		}catch(...){
			permissao = false;
			cout << "Erro: número inválido";
		}
	}while(permissao == false);
	
	
	do{
		cout << "Informe o número identificador do tratador deste animal (0 caso não haja): ";
		try{		
			cin >> id_tratador;	
			if(id_tratador == "0"){
				permissao = true;
			}else{
				permissao = !funcionarioExiste(id_tratador);
			}
		}catch(...){			
			cout << "Erro: identificador inválido";
		}
	}while (permissao == false);	


	do{
		cout << "Informe o número identificador do veterinario deste animal (0 caso não haja): ";		
		try{		
			cin >> id_veterinario;	
			if(id_veterinario == "0"){
				permissao = true;
			}else{
				permissao = !funcionarioExiste(id_veterinario);
			}
		}catch(...){
			cout << "Erro: identificador inválido";
		}
	}while (permissao == false);	

	carregarFuncionarios();
	carregarAnimais();

	for(auto it : armazenaFuncionarios){
		if(it.getId() == id_tratador){
			tratador = (Tratador) it;
		}
	}

	for(auto it : armazenaFuncionarios){
		if(it.getId() == id_veterinario){
			veterinario = (Veterinario) it;
		}
	}

	Animal a(id, classe, nome, cientifico, sexo, tamanho, dieta, 
		veterinario, tratador, batismo);

	armazenaAnimais.push_back(a);

}

void Empresa::consultarPorClasse(){
	carregarFuncionarios();

	int op;

	cout << "Informe a classe do animal: ";
	cout << "1- Anfíbio: " << endl;
	cout << "2- Mamífero: " << endl;
	cout << "3- Réptil" << endl;
	cout << "4- Ave" << endl;
	cout << "Informe a classe do animal: " << endl;
	cin >> op;

	switch(op){
		case 1:
			for(auto it : armazenaAnimais){
				if(it.getClasse() == "Amphibia"){
					cout << it;				
				}
			}
			break;

		case 2:
			for(auto it : armazenaAnimais){
				if(it.getClasse() == "Mammalia"){
					cout << it;				
			}
		}
			break;
		case 3:
			for(auto it : armazenaAnimais){
				if(it.getClasse() == "Reptilia"){
					cout << it;				
				}
			}
			break;
		case 4:
			for(auto it : armazenaAnimais){
				if(it.getClasse() == "Aves"){
					cout << it;				
				}
			}
			break;
		default:
			cout << "Operação inválida" << endl;
	}
}

void Empresa::consultarPorNome(){
	string nome;

	cout << "Informe o nome do animal: ";
	getline(cin, nome);

	for(auto it : armazenaAnimais){
		if(it.getNome() == nome){
			cout << it;				
		}
	}
}