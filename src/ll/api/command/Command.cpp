#include "ll/api/command/Command.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

namespace ll::command::detail {
void printCommandError(::Command const& command) noexcept {
    auto lock = ll::Logger::lock();
    try {
        logger.error("Error in command {}:", command.getCommandName());
    } catch (...) {}
    error_utils::printCurrentException(logger);
}
} // namespace ll::command::detail
