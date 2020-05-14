all:
	make -C sandbox
	cd sandbox; ./bin/main

clean:
	make -C hazel clean
	make -C sandbox clean
