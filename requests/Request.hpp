#pragma once

#include <string>

class Request
{
public:
	std::string getInput();
	void setInput(std::string input);
	std::string getKey();
	void setKey(std::string key);
	std::string getValue();
	void setValue(std::string value);
	std::string getType();
	void setType(std::string type);
	std::string toString();

private:
	std::string input;
	std::string key;
	std::string value;
	std::string type;

};