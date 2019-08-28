#### C ####

.PHONY: build view clean

build : build1 build2 build3

build1: L2P1.c
		gcc L2P1.c -pthread -o Lab2P1.exe 

build2: L2P2.c
		gcc L2P2.c -pthread -o Lab2P2.exe 

build3: L2P3.c
		gcc L2P3.c -pthread -o Lab2P3.exe 

clean:
		-\rm Lab2P1.exe
		-\rm Lab2P2.exe
		-\rm Lab2P3.exe