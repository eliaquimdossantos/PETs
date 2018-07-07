# Programa Pet Fera
# Created by David Franklin e Eliaquim dos Santos
# IMD0030 LP1 - Prof. Silvio Sampaio - BTI UFRN
# @date 06/06/2018
#
# $@ nome do alvo (target)
# $^ nome de todos os pré-requisitos sem duplicatas
# $< nome do primeiro pré-requisito
#

# variáveis genéricas
INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
LIB_DIR = lib
CC      = g++
CFLAGS  = -Wall -pedantic -std=c++11 -g -O0 -I. -I$(INC_DIR)/$(PROG_DIR)
CODFONT = $(SRC_DIR)/anfibio.cpp $(SRC_DIR)/animal.cpp $(SRC_DIR)/animalsilvestre.cpp $(SRC_DIR)/ave.cpp $(SRC_DIR)/aveexotica.cpp $(SRC_DIR)/empresa.cpp $(SRC_DIR)/avenativa.cpp $(SRC_DIR)/funcionario.cpp $(SRC_DIR)/exotico.cpp $(SRC_DIR)/util.cpp $(SRC_DIR)/nativo.cpp $(SRC_DIR)/tratador.cpp $(SRC_DIR)/veterinario.cpp $(SRC_DIR)/reptil.cpp
CABECALHOS = 

# variáveis do programa 1
PROG 		= petfera
PROG_ARG	= ""
PROG_OBJ	=  $(OBJ_DIR)/main.o $(LIB_DIR)/auxiliar.so

# variáveis do programa 2
PROG2 		= exportar
PROG2_ARG	= ""
PROG2_OBJ	=  $(OBJ_DIR)/exportar.o $(LIB_DIR)/auxiliar.so

# biblioteca dinamica
LIB_OBJ		= $(OBJ_DIR)/o $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/pessoa_tratador.o $(OBJ_DIR)/pessoa_veterinario.o $(OBJ_DIR)/animal_silvestre.o $(OBJ_DIR)/animal_exotico.o $(OBJ_DIR)/animal_nativo.o $(OBJ_DIR)/animal.o $(OBJ_DIR)/classe_ave.o $(OBJ_DIR)/classe_ave_exotico.o $(OBJ_DIR)/classe_ave_nativo.o $(OBJ_DIR)/classe_anfibio.o $(OBJ_DIR)/classe_anfibio_exotico.o $(OBJ_DIR)/classe_anfibio_nativo.o $(OBJ_DIR)/classe_mamifero.o $(OBJ_DIR)/classe_mamifero_exotico.o $(OBJ_DIR)/classe_mamifero_nativo.o $(OBJ_DIR)/classe_reptil.o $(OBJ_DIR)/classe_reptil_exotico.o $(OBJ_DIR)/classe_reptil_nativo.o

all: p1 p2

# Define o alvo (target) para a compilação completa.
# Define os alvos "executaveis" como dependências.
# Ao final da compilação, remove os arquivos objeto.

linux: $(PROG) $(PROG2) 
	rm $(OBJ_DIR)/*.o

p1: 
	$(CC) $(CFLAGS) $(SRC_DIR)/empresa.cpp $(SRC_DIR)/funcionario.cpp $(SRC_DIR)/tratador.cpp $(SRC_DIR)/veterinario.cpp $(SRC_DIR)/animal.cpp $(SRC_DIR)/main.cpp -o petfera
p2: 
	$(CC) $(CFLAGS) $(SRC_DIR)/empresa.cpp $(SRC_DIR)/funcionario.cpp $(SRC_DIR)/tratador.cpp $(SRC_DIR)/veterinario.cpp $(SRC_DIR)/animal.cpp $(SRC_DIR)/util.cpp -o exportar

# util
$(OBJ_DIR)/util.o: $(SRC_DIR)/util.cpp $(INC_DIR)/util.h 
	$(CC) $(CFLAGS) -c $(SRC_DIR)/util.cpp -o $@ $<

# empresa
$(OBJ_DIR)/empresa.o: $(SRC_DIR)/empresa.cpp $(INC_DIR)/empresa.h $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/tratador.o $(OBJ_DIR)/veterinario.o
	$(CC) $(CFLAGS) -c $(OBJ_DIR)/veterinario.o $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/tratador.o $(SRC_DIR)/empresa.cpp -o $@ $<

# funcionario
$(OBJ_DIR)/funcionario.o: $(SRC_DIR)/funcionario.cpp $(INC_DIR)/funcionario.h 
	$(CC) $(CFLAGS) -c $(SRC_DIR)/funcionario.cpp -o $@ $<

# tratador
$(OBJ_DIR)/tratador.o: $(SRC_DIR)/tratador.cpp $(INC_DIR)/tratador.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/tratador.cpp -o $@ $<

# veterinario
$(OBJ_DIR)/veterinario.o: $(SRC_DIR)/veterinario.cpp $(INC_DIR)/veterinario.h 
	$(CC) $(CFLAGS) -c $(SRC_DIR)/veterinario.cpp -o $@ $<

# animal
$(OBJ_DIR)/animal.o: $(SRC_DIR)/animal.cpp $(INC_DIR)/animal.h 
	$(CC) $(CFLAGS) -c $(SRC_DIR)/animal.cpp -o $@ $<

# executavel 1
$(PROG): $(OBJ_DIR)/empresa.o $(OBJ_DIR)/animal.o
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(OBJ_DIR)/empresa.o $(OBJ_DIR)/animal.o -o $@
	@echo "+++ [Executavel $(PROG) criado com sucesso em $(OBJ_DIR)/] +++"

# executavel 2
$(PROG2): $(OBJ_DIR)/empresa.o $(OBJ_DIR)/animal.o
	$(CC) $(CFLAGS) $(SRC_DIR)/ultil.cpp $(OBJ_DIR)/empresa.o -o $(OBJ_DIR)/$@
	@echo "+++ [Executavel $(PROG2) criado com sucesso em $(OBJ_DIR)/] +++"

# remove arquivos executaveis e objetos compilados
clean:
	rm -f $(OBJ_DIR)/*.o

# remove arquivos executaveis
clean-executables:
	rm -f $(OBJ_DIR)/*/*.exe

# testa o executavel com o valgrind
valgrind:
	valgrind -v --leak-check=full --show-reachable=yes --track-origins=yes $(OBJ_DIR)/$(PROG) $(PROG_ARG)

# up stack - aumenta o tamanho da pilha em sistemas UNIX
upstack:
	sudo ulimit -s unlimited

# down stack - volta o tamanho da pilha para o default em sistemas UNIX
downstack:
	sudo ulimit -s 8192

# remove arquivos de saida .csv
rmcsv:
	rm -f data/*.csv

# gera documentação com o Doxygen
docs:
	doxygen

# remove documentação doxygen
rmdocs:
	rm -rf documentation/doc