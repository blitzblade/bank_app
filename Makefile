app: main.o db.o cache.o main_menu.o util.o main_menu.o base_menu.o login.o signup.o
	g++ main.o db.o cache.o main_menu.o base_menu.o login.o signup.o util.o --std=c++20 -lsqlite3 -lbcrypt -o app

db.o: db/db.cpp
	g++ -c db/db.cpp --std=c++20
cache.o: db/cache.cpp
	g++ -c db/cache.cpp --std=c++20
menu_constants.h: menu_constants.h
	g++ -c menu_constants.h --std=c++20
base_menu.o: menus/base_menu.cpp
	g++ -c menus/base_menu.cpp --std=c++20
login.o: menus/login.cpp
	g++ -c menus/login.cpp --std=c++20
signup.o: menus/signup.cpp
	g++ -c menus/signup.cpp --std=c++20 -v
main_menu.o: menus/main_menu.cpp
	g++ -c menus/main_menu.cpp --std=c++20
util.o: utils/util.cpp
	g++ -c utils/util.cpp --std=c++20
main.o: main.cpp
	g++ -c main.cpp --std=c++20
clean:
	rm *.o app