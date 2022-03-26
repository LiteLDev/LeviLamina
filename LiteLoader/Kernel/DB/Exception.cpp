#include <DB/Exception.h>
#include <third-party/FMT/format.h>

namespace DB
{

Exception::Exception(const char* message)
    : std::exception(message)
{
}

Exception::Exception(const std::string& message)
    : std::exception(message.c_str())
{
}

template <typename... Args>
Exception::Exception(const std::string& fmt, Args... args)
    : std::exception(fmt::format(fmt, args))
{
}

} // namespace DB