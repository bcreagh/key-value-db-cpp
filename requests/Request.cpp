#include <string>

#include "Request.hpp"


std::string Request::getKey() {
	return Request::key;
}

void Request::setKey(std::string key) {
	Request::key = key;
}

std::string Request::getValue() {
	return Request::value;
}

void Request::setValue(std::string value) {
	Request::value = value;
}

RequestType Request::getType() {
	return Request::type;
}

void Request::setType(RequestType type) {
	Request::type = type;
}

std::string Request::toString() {
	return "{ key: " + Request::key + ", value: " + value + ", type: " + Request::typeAsString() + " }";
}

std::string Request::typeAsString() {
	switch (Request::type)
	{
	case RequestType::READ:
		return "READ";
	case RequestType::INSERT:
		return "INSERT";
	case RequestType::UPDATE:
		return "UPDATE";
	case RequestType::DELETE:
		return "DELETE";
	default:
		return "";
	}
}
