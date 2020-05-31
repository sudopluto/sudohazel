.PHONY: hazel

./bin/libhazel.so: ./bin-int/hazel.o
	g++ -shared ./bin-int/hazel.o -o ./bin/libhazel.so

./bin-int/hazel.o: ./src/hazel/*
	g++ -Wall -c -fPIC ./src/hazel/Application.cpp -o ./bin-int/hazel.o

clean:
	- rm ./bin/*
	- rm ./bin-int/*
