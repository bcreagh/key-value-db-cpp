main: main.cpp
	g++ -Wall main.cpp requests/RequestFactory.cpp requests/RequestFactory.hpp requests/Request.cpp requests/Request.hpp -o build/bridb