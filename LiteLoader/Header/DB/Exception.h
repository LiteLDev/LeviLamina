#pragma once
#include <string>

namespace DB {

/**
 * @brief The Exception class
 * 
 */
class Exception : public std::exception
{

public:
    Exception(const char* message);
    Exception(const std::string& message);
    // Internal
    template <typename ... Args>
    Exception(const std::string& fmt, Args... args);

};

} // namespace DB