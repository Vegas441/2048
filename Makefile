CC = g++
CLAFGS = -std=c++17 -Wall -Wextra

2048: main.o grid.o renderGrid.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.cpp
	$(CC) $(CFLAGS) -c $< -o $@

grid.o: grid.cpp grid.h
	$(CC) $(CFLAGS) -c $< -o $@ 

renderGrid.o: renderGrid.cpp renderGrid.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o 2048

run:
	./2048