#include <stdio.h>
#include <iostream>
#include <string>

#include "requests/RequestFactory.hpp"
#include "requests/Request.hpp"

int main() {
	RequestFactory requestFactory;

	std::string input;
	Request request;

	while (std::getline(std::cin, input)) {
		if (input == "exit") {
			break;
		}

		request = requestFactory.createRequest(input);

		std::cout << request.toString() << std::endl;
	}
	return 0;
}