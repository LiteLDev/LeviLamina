#include "ll/api/event/Listener.h"
#include "ll/api/Logger.h"
#include "ll/api/base/ErrorInfo.h"

namespace ll::event::detail {
void printListenerError(std::string_view eventName) noexcept {
    static Logger logger("Event");

    std::lock_guard lock(Logger::loggerMutex);
    try {
        logger.error("Error in listener of [{}]:", eventName);
    } catch (...) {}
    error_info::printCurrentException(logger);
}
} // namespace ll::event::detail
