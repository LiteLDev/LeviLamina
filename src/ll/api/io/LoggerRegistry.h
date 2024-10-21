#pragma once

#include <memory>
#include <string_view>

#include "ll/api/coro/Generator.h"
#include "ll/api/io/Logger.h"

namespace ll::io {
class LoggerRegistry {
    struct Impl;
    std::unique_ptr<Impl> impl;

    LoggerRegistry();
    ~LoggerRegistry();

public:
    LLNDAPI static LoggerRegistry& getInstance();

    LLNDAPI std::shared_ptr<Logger> getOrCreate(std::string_view title);

    LLNDAPI std::shared_ptr<Logger> tryGet(std::string_view title);

    LLNDAPI bool erase(std::string_view title);

    LLNDAPI coro::Generator<Logger&> loggers();
};
} // namespace ll::io
