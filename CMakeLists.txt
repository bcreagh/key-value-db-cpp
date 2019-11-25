project("key-value-db-cpp")

add_executable(bridb main.cpp requests/Request.cpp requests/RequestFactory.cpp requests/RequestType.hpp util/StringUtil.cpp)