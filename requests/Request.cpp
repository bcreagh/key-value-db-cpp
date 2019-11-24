#include <string>

#include "Request.hpp"


std::string Request::getInput() {
	return Request::input;
}

void Request::setInput(std::string input) {
	Request::input = input;
}

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

std::string Request::getType() {
	return Request::type;
}

void Request::setType(std::string type) {
	Request::type = type;
}

std::string Request::toString() {
	return "{ input: " + Request::input + ", key: " + Request::key + ", value: " + value + ", type: " + type + " }";
}
