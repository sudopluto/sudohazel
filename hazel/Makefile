.PHONY: hazel

spdlog = -I./vendor/spdlog/include

./bin/libhazel.so: ./bin-int/hazel.o ./bin-int/log.o
	g++ -shared ./bin-int/hazel.o ./bin-int/log.o -o ./bin/libhazel.so

./bin-int/hazel.o: ./src/hazel/Application.*
	g++ -Wall -c -fPIC ./src/hazel/Application.cpp -o ./bin-int/hazel.o

./bin-int/log.o: ./src/hazel/Log.*
	g++ $(spdlog) -Wall -c -fPIC ./src/hazel/Log.cpp -o ./bin-int/log.o

clean:
	- rm ./bin/*
	- rm ./bin-int/*
