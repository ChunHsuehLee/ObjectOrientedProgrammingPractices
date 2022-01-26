all: main

CC = g++
CFLAGS = -Wall -c
 
# ****************************************************
# Targets needed to bring the executable up to date
main: Average_car.o Slow_car.o Fast_car.o Fancy_car.o main.o
	$(CC) Average_car.o Slow_car.o Fast_car.o Fancy_car.o main.o -o main

Average_car.o: Average_car.cpp Average_car.hpp
	$(CC) $(CFLAGS) Average_car.cpp -o Average_car.o

Slow_car.o: Slow_car.cpp Slow_car.hpp
	$(CC) $(CFLAGS) Slow_car.cpp -o Slow_car.o

Fast_car.o: Fast_car.cpp Fast_car.hpp
	$(CC) $(CFLAGS) Fast_car.cpp -o Fast_car.o

Fancy_car.o: Fancy_car.cpp Fancy_car.hpp
	$(CC) $(CFLAGS) Fancy_car.cpp -o Fancy_car.o

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main.o

all: test_car

test_car: test.o Average_car.o Slow_car.o Fast_car.o Fancy_car.o
	$(CC) test.o Average_car.o Slow_car.o Fast_car.o Fancy_car.o -o test_car

test.o: test/test.cpp 
	$(CC) $(CFLAGS) test/test.cpp -o test.o

clean:
	rm -f *.o *.out *.exe