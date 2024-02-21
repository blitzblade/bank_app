app: main.o db.o
	g++ main.o db.o --std=c++20 -lsqlite3 -o app
db.o: db/db.cpp
	g++ -c db/db.cpp --std=c++20 
main.o: main.cpp
	g++ -c main.cpp --std=c++20
clean:
	rm *.o app