#pragma once

#include <string>

#include "Request.hpp"

class RequestFactory
{
public:
	Request createRequest(std::string query);

private:

};