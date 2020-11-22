.PHONY: run

HZ_INC=-I../hazel/src
SPD_INC=-I../hazel/vendor/spdlog/include

INC=$(HZ_INC) $(SPD_INC)

HZ_DIR=../hazel/bin/libhazel.so

run: ./bin/sandboxapp
	./bin/sandboxapp

./bin/sandboxapp: hazel
	cp $(HZ_DIR) ./bin/
	g++ -Wall $(INC) ./bin/libhazel.so ./src/sandboxapp.cpp -o ./bin/sandboxapp

hazel:
	make -C ../hazel

clean:
	- rm ./bin/*
	- rm ./bin-int/*
