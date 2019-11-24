#include <sstream>

#include "StringUtil.hpp"

// This is heavily based off of Arafat Hasan's SO answer here:
// https://stackoverflow.com/questions/14265581/parse-split-a-string-in-c-using-string-delimiter-standard-c
std::vector<std::string> StringUtil::split(std::string &input, char delimiter) {
	std::vector<std::string> result;

	std::stringstream ss (input);
	std::string item;

	while (getline(ss, item, delimiter)) {
		result.push_back(item);
	}

	return result;
}