#include <string>
#include <iostream>

#include "RequestFactory.hpp"
#include "Request.hpp"

Request RequestFactory::createRequest(std::string query) {
	Request request;
	request.setInput("Request says: " + query);
	request.setKey(query);
	request.setValue(query);
	request.setType(query);
	return request;
}
