#include "ll/api/io/Logger.h"
#include "ll/core/io/Output.h"

namespace ll::io {
struct Logger::Impl {
    std::string title;
};

Logger::Logger() : impl(std::make_unique<Impl>()) {}
Logger::~Logger() = default;

Logger::Logger(std::string_view title) : Logger() { setTitle(title); }

void Logger::print(LogLevel level, std::string_view msg) const noexcept {
    defaultOutput(impl->title + " " + std::string{msg} + '\n');
}


void Logger::setTitle(std::string_view title) { impl->title.assign(title); }

} // namespace ll::io
