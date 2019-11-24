#include <string>
#include <iostream>
#include <stdexcept>

#include "RequestFactory.hpp"
#include "Request.hpp"
#include "RequestType.hpp"
#include "../util/StringUtil.hpp"

Request RequestFactory::createRequest(std::string query) {
	StringUtil stringUtil;
	std::vector<std::string> tokenizedQuery = stringUtil.split(query, ' ');
	RequestType requestType = getRequestType(tokenizedQuery[0]);
	
	switch (requestType)
	{
	case RequestType::READ:
		return getReadRequest(tokenizedQuery);
	case RequestType::INSERT:
		return getInsertRequest(tokenizedQuery);
	case RequestType::UPDATE:
		return getUpdateRequest(tokenizedQuery);
	case RequestType::DELETE:
		return getDeleteRequest(tokenizedQuery);
	}
	

	Request request;
	request.setKey(query);
	request.setValue(query);
	request.setType(requestType);
	return request;
}


RequestType RequestFactory::getRequestType(std::string type) {
	if (type == "READ") {
		return RequestType::READ;
	}
	if (type == "INSERT") {
		return RequestType::INSERT;
	}
	if (type == "UPDATE") {
		return RequestType::UPDATE;
	}
	if (type == "DELETE") {
		return RequestType::DELETE;
	}
	throw std::invalid_argument("The request type <" + type + "> is not a valid request type");
}

Request RequestFactory::getReadRequest(std::vector<std::string> tokenizedQuery) {
	size_t expectedNumberOfArgs = 2;
	if (tokenizedQuery.size() != expectedNumberOfArgs) {
		throw std::invalid_argument("Incorrect number of arguments for READ. Expected " + std::to_string(expectedNumberOfArgs) + ", got " + std::to_string(tokenizedQuery.size()));
	}
	Request request;
	request.setType(RequestType::READ);
	request.setKey(tokenizedQuery[1]);
	return request;
}

Request RequestFactory::getInsertRequest(std::vector<std::string> tokenizedQuery) {
	size_t expectedNumberOfArgs = 3;
	if (tokenizedQuery.size() != expectedNumberOfArgs) {
		throw std::invalid_argument("Incorrect number of arguments for INSERT. Expected " + std::to_string(expectedNumberOfArgs) + ", got " + std::to_string(tokenizedQuery.size()));
	}
	Request request;
	request.setType(RequestType::INSERT);
	request.setKey(tokenizedQuery[1]);
	request.setValue(tokenizedQuery[2]);
	return request;
}

Request RequestFactory::getUpdateRequest(std::vector<std::string> tokenizedQuery) {
	size_t expectedNumberOfArgs = 3;
	if (tokenizedQuery.size() != expectedNumberOfArgs) {
		throw std::invalid_argument("Incorrect number of arguments for UPDATE. Expected " + std::to_string(expectedNumberOfArgs) + ", got " + std::to_string(tokenizedQuery.size()));
	}
	Request request;
	request.setType(RequestType::UPDATE);
	request.setKey(tokenizedQuery[1]);
	request.setValue(tokenizedQuery[2]);
	return request;
}

Request RequestFactory::getDeleteRequest(std::vector<std::string> tokenizedQuery) {
	size_t expectedNumberOfArgs = 2;
	if (tokenizedQuery.size() != expectedNumberOfArgs) {
		throw std::invalid_argument("Incorrect number of arguments for DELETE. Expected " + std::to_string(expectedNumberOfArgs) + ", got " + std::to_string(tokenizedQuery.size()));
	}
	Request request;
	request.setType(RequestType::DELETE);
	request.setKey(tokenizedQuery[1]);
	return request;
}

