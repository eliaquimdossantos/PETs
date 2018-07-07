INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
LIB_DIR = lib
BIN = bin

CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -I$(INC_DIR)
CFLB = -pedantic -std=c++11  -I$(INC_DIR)
ARCHIEVE = ar

linux: petfera.so

petfera.so: $(SRC_DIR)/animal.cpp $(INC_DIR)/animal.h $(SRC_DIR)/anfibio.cpp $(INC_DIR)/anfibio.h $(SRC_DIR)/reptil.cpp $(INC_DIR)/reptil.h $(SRC_DIR)/ave.cpp $(INC_DIR)/ave.h $(SRC_DIR)/funcionario.cpp $(INC_DIR)/funcionario.h $(SRC_DIR)/tratador.cpp $(INC_DIR)/tratador.h $(SRC_DIR)/veterinario.cpp $(INC_DIR)/veterinario.h $(SRC_DIR)/avenativa.cpp $(INC_DIR)/avenativa.h $(SRC_DIR)/aveexotica.cpp $(INC_DIR)/aveexotica.h $(SRC_DIR)/exotico.cpp $(INC_DIR)/exotico.h $(SRC_DIR)/nativo.cpp $(INC_DIR)/nativo.h $(SRC_DIR)/animalsilvestre.cpp $(INC_DIR)/animalsilvestre.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/animal.cpp -o $(OBJ_DIR)/animal.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/anfibio.cpp -o $(OBJ_DIR)/anfibio.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/reptil.cpp -o $(OBJ_DIR)/reptil.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/ave.cpp -o $(OBJ_DIR)/ave.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/funcionario.cpp -o $(OBJ_DIR)/funcionario.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/tratador.cpp -o $(OBJ_DIR)/tratador.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/veterinario.cpp -o $(OBJ_DIR)/veterinario.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/avenativa.cpp -o $(OBJ_DIR)/avenativa.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/aveexotica.cpp -o $(OBJ_DIR)/aveexotica.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/exotico.cpp -o $(OBJ_DIR)/exotico.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/nativo.cpp -o $(OBJ_DIR)/nativo.o 
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/animalsilvestre.cpp -o $(OBJ_DIR)/animalsilvestre.o 
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/animal.o $(OBJ_DIR)/anfibio.o $(OBJ_DIR)/reptil.o $(OBJ_DIR)/ave.o $(OBJ_DIR)/funcionario.o $(OBJ_DIR)/tratador.o $(OBJ_DIR)/veterinario.o $(OBJ_DIR)/avenativa.o $(OBJ_DIR)/aveexotica.o $(OBJ_DIR)/exotico.o $(OBJ_DIR)/nativo.o $(OBJ_DIR)/animalsilvestre.o 
	@echo "+++ [Biblioteca dinâmica criada em $(LIB_DIR)/$@] +++"

clean:
	rm build/*.o