double: main.cpp
	g++ -o main main.cpp
	./main.exe

float: main.cpp
	g++ -o main main.cpp -D FLOAT
	./main.exe