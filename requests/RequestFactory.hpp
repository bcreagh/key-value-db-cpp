#pragma once

#include <string>
#include <vector>

#include "Request.hpp"
#include "RequestType.hpp"

class RequestFactory
{
public:
	Request createRequest(std::string query);

private:
	RequestType getRequestType(std::string type);
	Request getReadRequest(std::vector<std::string> tokenizedQuery);
	Request getInsertRequest(std::vector<std::string> tokenizedQuery);
	Request getUpdateRequest(std::vector<std::string> tokenizedQuery);
	Request getDeleteRequest(std::vector<std::string> tokenizedQuery);
};