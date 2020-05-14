./bin/main: hazel
	g++ -Wall ../hazel/bin/libhazel.so ./src/main.cpp -o ./bin/main

hazel:
	make -C ../hazel

clean:
	- rm ./bin/*
	- rm ./bin-int/*
