#pragma once

#include <string>

#include "RequestType.hpp"

class Request
{
public:
	std::string getKey();
	void setKey(std::string key);
	std::string getValue();
	void setValue(std::string value);
	RequestType getType();
	void setType(RequestType type);
	std::string toString();

private:
	std::string key;
	std::string value;
	RequestType type;
	std::string typeAsString();

};