main: 
	g++ -Wall -Werror src/main.cpp src/game.cpp src/raylibEngine.cpp src/entities/dinosaur.cpp -o build/game -lraylib
