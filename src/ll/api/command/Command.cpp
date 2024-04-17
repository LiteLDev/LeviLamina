#include "ll/api/command/Command.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/server/commands/CommandOutput.h"

namespace ll::command::detail {
void printCommandError(::Command const& command, ::CommandOutput& output) noexcept {
    auto lock = ll::Logger::lock();
    try {
        logger.error("Error in command {}:", command.getCommandName());
        output.error("command threw an exception");
    } catch (...) {}
    error_utils::printCurrentException(logger);
}
} // namespace ll::command::detail
