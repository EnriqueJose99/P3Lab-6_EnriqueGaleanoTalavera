output: main.o bombas.h escenario.h espina.h items.h jugador.h normal.h
	g++ main.o bombas.o escenario.o espina.o items.o jugador.o normal.o -o output

main.o : main.cpp bombas.h escenario.h espina.h items.h jugador.h normal.h
	g++ -c main.cpp
