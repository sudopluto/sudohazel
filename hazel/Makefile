.PHONY: hazel

hazel: ./bin/libhazel.so ./bin/libhazel.h

./bin/libhazel.h: ./src/test.h
	cp ./src/test.h ./bin/libhazel.h

./bin/libhazel.so: ./bin-int/hazel.o
	g++ -shared ./bin-int/hazel.o -o ./bin/libhazel.so

./bin-int/hazel.o: ./src/test.h ./src/test.cpp
	g++ -Wall -c -fPIC ./src/test.cpp -o ./bin-int/hazel.o

clean:
	- rm ./bin/*
	- rm ./bin-int/*
