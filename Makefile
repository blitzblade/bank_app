app: main.o db.o base_menu.o main_menu.o
	g++ main.o db.o base_menu.o main_menu.o --std=c++20 -lsqlite3 -o app

db.o: db/db.cpp
	g++ -c db/db.cpp --std=c++20

menu_constants.h: menu_constants.h
	g++ -c menu_constants.h --std=c++20

base_menu.o: menus/base_menu.cpp
	g++ -c menus/base_menu.cpp --std=c++20

main_menu.o: menus/main_menu.cpp
	g++ -c menus/main_menu.cpp --std=c++20

main.o: main.cpp
	g++ -c main.cpp --std=c++20

clean:
	rm *.o app