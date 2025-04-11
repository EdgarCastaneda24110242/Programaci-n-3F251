LIB :=-lftxui-screen -lftxui-dom -lftxui-component
PROYECTO := programa
CXX := c++
INCLUDE := -Iinclude
EXE := bin/$(PROYECTO)

$(EXE) : src/main.cpp
	$(CXX) $< -o $@ $(LIB) $(INCLUDE) -std=c++17

run : $(EXE)   
	./$<


memoria : bin/memoria
	./$< 
bin/memoria : src/memoria.cpp
	$(CXX) $< -o $@ -std=c++17

archivos : bin/archivos
	./$<

bin/archivos : src/archivos.cpp
	$(CXX) $< -o $@ -std=c++17