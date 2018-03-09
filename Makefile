output: main.o bombas.o escenario.o invisible.o espina.o items.o jugador.o normal.o
	g++ main.o bombas.o escenario.o espina.o items.o jugador.o normal.o invisible.o -o output

main.o: main.cpp bombas.h escenario.h espina.h items.h jugador.h normal.h invisible.h
	g++ -c main.cpp

bombas.o: bombas.cpp bombas.h items.h
	g++ -c bombas.cpp

escenario.o: escenario.cpp escenario.h items.h bombas.h
	g++ -c escenario.cpp

invisible.o: invisible.cpp invisible.h escenario.h
	g++ -c invisible.cpp

espina.o: espina.cpp espina.h bombas.h
	g++ -c espina.cpp

items.o: items.cpp items.h
	g++ -c items.cpp

jugador.o: jugador.cpp jugador.h items.h
	g++ -c jugador.cpp

normal.o: normal.cpp normal.h bombas.h
	g++ -c normal.cpp
