
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/core/plugin-abi/Plugin.h"

namespace ll::inline utils::error_utils {
LLAPI void printCurrentException(Logger& logger, std::exception_ptr const& e) noexcept {
    auto l = io::LoggerRegistry::getInstance().getOrCreate(logger.title);
    printCurrentException(*l, io::LogLevel::Error, e);
}
LLAPI void printCurrentException(OutputStream& stream, std::exception_ptr const& e) noexcept {
    auto p = io::LoggerRegistry::getInstance().getOrCreate(stream.logger->title);

    io::LogLevel lvl;

    switch (stream.level) {
    case 5:
        lvl = io::LogLevel::Debug;
        break;
    case 4:
        lvl = io::LogLevel::Info;
        break;
    case 3:
        lvl = io::LogLevel::Warn;
        break;
    case 2:
        lvl = io::LogLevel::Error;
        break;
    default:
    case 1:
        lvl = io::LogLevel::Fatal;
        break;
    }

    printCurrentException(*p, lvl, e);
}
} // namespace ll::inline utils::error_utils
